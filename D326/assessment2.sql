CREATE OR REPLACE FUNCTION rental_date_format(datetime_of_rental TIMESTAMP)
   RETURNS VARCHAR
   LANGUAGE plpgsql
AS
$$
DECLARE day SMALLINT;
DECLARE month VARCHAR;
DECLARE year SMALLINT;
DECLARE time VARCHAR;
BEGIN
	RETURN to_char(datetime_of_rental, 'Mon DD, YYYY HH12:MI AM');
END;
$$

SELECT rental_date_format('2011-09-11 22:25:46.996577');

CREATE TABLE category_rentals_detail (
	film_title VARCHAR(255),
	category_id INT,
	category_name VARCHAR(25),
	rental_ID INT,
	rental_date VARCHAR
);

CREATE TABLE category_rentals_summary (
	category_name VARCHAR(25),
	rentals INT
);

INSERT INTO category_rentals_detail
SELECT f.title, c.category_id, c.name,
r.rental_id, rental_date_format(r.rental_date) AS rental_date
FROM category AS c
INNER JOIN film_category
ON c.category_id = film_category.category_id
INNER JOIN film AS f
ON film_category.film_id = f.film_id
INNER JOIN inventory AS i
ON f.film_id = i.film_id
INNER JOIN rental AS r
ON i.inventory_id = r.inventory_id
INNER JOIN payment AS p
ON r.rental_id = p.rental_id;


CREATE TRIGGER rentals_summary_trigger
AFTER INSERT
ON category_rentals_detail
FOR EACH STATEMENT
EXECUTE PROCEDURE update_rentals_summary();

CREATE OR REPLACE FUNCTION update_rentals_summary()
	RETURNS TRIGGER
	LANGUAGE PLPGSQL
AS 
$$
BEGIN
	DELETE FROM category_rentals_summary;
	INSERT INTO category_rentals_summary
	SELECT category_name, COUNT(*) AS total_rentals
	FROM category_rentals_detail
	GROUP BY category_name
	ORDER BY total_rentals DESC
	LIMIT 5; 

	RETURN NEW;
	
END;
$$

SELECT *
FROM category_rentals_detail
WHERE rental_id = 6001;

SELECT *
FROM category_rentals_summary;

CREATE OR REPLACE PROCEDURE refresh_summary()
LANGUAGE plpgsql
AS 
$$
BEGIN
	DELETE FROM category_rentals_detail;
	INSERT INTO category_rentals_detail
SELECT f.title, c.category_id, c.name,
r.rental_id, rental_date_format(r.rental_date) AS rental_date
FROM category AS c
INNER JOIN film_category
ON c.category_id = film_category.category_id
INNER JOIN film AS f
ON film_category.film_id = f.film_id
INNER JOIN inventory AS i
ON f.film_id = i.film_id
INNER JOIN rental AS r
ON i.inventory_id = r.inventory_id
INNER JOIN payment AS p
ON r.rental_id = p.rental_id;
END;
$$

CALL refresh_summary();

INSERT INTO category_rentals_detail (film_title, category_id, category_name, rental_id, rental_date)
VALUES ('Hits From Da Bong 2', 1, 'Sports', 9001 , 'August 14, 2024');

SELECT c.name, EXTRACT(MONTH FROM r.rental_date) AS month, COUNT(r.rental_id) AS total_rentals
FROM category AS c
INNER JOIN film_category ON c.category_id = film_category.category_id
INNER JOIN film ON film_category.film_id = film.film_id
INNER JOIN inventory ON film.film_id = inventory.film_id
INNER JOIN rental AS r ON inventory.inventory_id = r.inventory_id
WHERE EXTRACT(MONTH FROM r.rental_date) IN (6, 7, 8)
GROUP BY c.name, month
ORDER BY month, total_rentals DESC;
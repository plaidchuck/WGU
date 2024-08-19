-- D326 Advanced Data Management - Gary Chidester

-- B

CREATE OR REPLACE FUNCTION rental_date_format(datetime_of_rental TIMESTAMP)
   RETURNS VARCHAR
   LANGUAGE plpgsql
AS
$$
DECLARE day SMALLINT;
DECLARE month VARCHAR;
BEGIN
	SELECT EXTRACT(DAY FROM datetime_of_rental) INTO day;
	SELECT to_char(datetime_of_rental, 'Mon') INTO month;
	RETURN CONCAT(month, ' ', day);
END;
$$

-- Test function of raw TIMESTAMP data
SELECT rental_date_format('2024-08-17 22:25:46.996577');
SELECT rental_date_format('2023-12-25 00:01:24.9499');


-- C

DROP TABLE IF EXISTS category_rentals_detail;
DROP TABLE IF EXISTS category_rentals_summary;

CREATE TABLE category_rentals_detail (
	rental_ID INT,
	film_title VARCHAR,
	category_name VARCHAR,
	rental_date VARCHAR,
	PRIMARY KEY (rental_id)
);

CREATE TABLE category_rentals_summary (
	category_name VARCHAR,
	total_rentals INT
);

-- Test and confirm datatypes and columns
SELECT * FROM category_rentals_detail;
SELECT * FROM category_rentals_summary;

-- D

INSERT INTO category_rentals_detail
SELECT DISTINCT r.rental_id, f.title, c.name,
rental_date_format(r.rental_date) AS rental_date
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
ON r.rental_id = p.rental_id
WHERE EXTRACT(MONTH FROM r.rental_date) IN (6, 7, 8)
ORDER BY r.rental_id;

--Test and confirm raw data is loaded into details table properly
SELECT * FROM category_rentals_detail;


-- E

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
	SELECT category_name, COUNT(rental_id)
	FROM category_rentals_detail
	GROUP BY category_name
	ORDER BY COUNT(rental_id) DESC;

	RETURN NEW;
	
END;
$$

-- Confirm trigger ran and populated summary tables when details is first
-- populated and also when new row is inserted in details table


INSERT INTO category_rentals_detail 
VALUES (1, 'Pish posh', 'Sports', 'Aug 30');

SELECT * from category_rentals_detail;
SELECT * FROM category_rentals_summary;

-- F

CREATE OR REPLACE PROCEDURE refresh_summary()
LANGUAGE plpgsql
AS 
$$
BEGIN
	DELETE FROM category_rentals_detail;
	DELETE FROM category_rentals_summary;
	INSERT INTO category_rentals_detail
SELECT DISTINCT r.rental_id, f.title, c.name,
rental_date_format(r.rental_date) AS rental_date
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
ON r.rental_id = p.rental_id
WHERE EXTRACT(MONTH FROM r.rental_date) IN (6, 7, 8)
ORDER BY r.rental_id;
END;
$$

CALL refresh_summary();
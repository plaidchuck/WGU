

# Relational Model  

Relational model is based on a tabular structure in commercial products around 1980.  Originally made for bank transactional data or airline reservations. Original database models were Tree and Linked List, Relational became more feasible with better computing power.  Newer models include Class, Vertex, and document based/NoSQL ones like XML and JSON.  

Data structures of tables include column, row, and the data type that make up column values.  

Theoretical foundation based on relational algebra from set theory which includes unions, intersections, differences, etc.  

There's a distinction to be made between the relational model rules and actual business rules which are requried by an organization for how to best manage their database, i.e. a relational rule would be to have each table have a unique primary key with values that don't have to repeat (e.g., customer/employee ID), whereas a business rule would be something such as that when a row value is removed in one table then foreign key values of this value in another table would be deleted (cascade).  

Data structure terms:  

| Databases	|Mathematics|Files |
| ---       |  ---      |  --- |
| Table	    | Relation	| File |  
| Column	| Attribute	| Field|  
| Row	    |  Tuple   	|Record|  
| Data type	|  Domain  	| Data type | 

# Structured Query Language  

## SQL sublanguages  

- Data Definition Language: Defines structure of database  
- Data Query Language: Retrieves data  
- Data Manipulation Language: Manipulates data  
- Data Control Language: Controls access to database  
- Data Transaction Lanaguage: Manages database transactions(Save/backup)  

## Managing Databases  

**CREATE/DROP DATABASE** - Creates or deletes database instance  

- SHOW DATABASES lists databases available in the database system.  
- SHOW TABLES lists tables available in the currently selected database.  
- SHOW COLUMNS lists columns available in a specific table named by a FROM clause.  
- SHOW CREATE TABLE shows the CREATE TABLE statement for a given table.  

## Tables  

Based on relational model rules, tables should not have columns with the same names, rows with the exact same data, multiple values in a cell, or any required row order.  

### Create a table  

CREATE TABLE TableName (  
  Column1 DATA_TYPE,  
  Column2 DATA_TYPE,  
  ...  
  ColumnN DATA_TYPE  
);  

DROP TABLE TableName;  

### Altar table  

ALTER TABLE to make some change to a tables columns or data types  

- ADD  
- CHANGE  
- DROP  


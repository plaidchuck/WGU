# Relational Model  

Relational model is based on a tabular structure in commercial products around 1980.  Originally made for bank transactional data or airline reservations. Original database models were Tree and Linked List, Relational became more feasible with better computing power.  Newer models include Class, Vertex, and document based/NoSQL ones like XML and JSON.  

Data structures of tables include column, row, and the data type that make up column values.  

Theoretical foundation based on relational algebra from set theory which includes unions, intersections, differences, etc.  

There's a distinction to be made between the relational model rules and actual business rules which are requried by an organization for how to best manage their database, i.e. a relational rule would be to have each table have a unique primary key with values that don't have to repeat (e.g., customer/employee ID), whereas a business rule would be something such as that when a row value is removed in one table then foreign key values of this value in another table would be deleted (cascade).  

Data structure terms:  

Databases	Mathematics	Files  

| Table	    | Relation	| File |
| ---       |  ---      |  --- |  
| Column	| Attribute	| Field|  
| Row	    |  Tuple   	|Record|  
| Data type	|  Domain  	| Data type | 

# Structured Query Language  

## SQL sublanguages  

- Data Definition Language  
- Data Query Language  
- Data Manipulation Language  
- Data Control Language  
- Data Transaction Lanaguage  

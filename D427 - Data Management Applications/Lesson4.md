# Entity Relationship Model  

**Entity** - 
An entity is the object, business concept, person, place, thing or activity which will have information about it stored. In practice it is usually a *table*

**Relationship** - Is a statement thatd describes the relation between entities.  In practice usually denoted as *keys* between entities or tables.

**Attribute** - Is what describes the entity. In practice is usually a *field* or *column* within a table.

Note that relationships can exist between the same entities or even within the same entity.  

## Database Design  

Steps usually taken to make complex databases:  

- **Analysis** - A high level collection of information needed for a database involving discovery, interviews, and determining ERA.  Generally ignores implementation details.  

- **Logical Design** - Generally converts an ERA model into the actual tables/columns/keys used in the database  

- **Physical Design** - Concerns how the database and its objects are actually stored on a physical or logicalmedia(e.g., Indexing)  

## ER Diagram  

**Glossary/Dictionary/Repository** - Contains specific information of the diagram described by the big three <u>ERA</u>.  

Each ERA has *types* and *instances*. Types are a set of each ERA thing, e.g. these are the column names and instances are usually an individual thing or statement, e.g. an actual piece of data inputted into the database.  

## ERA Discovery  

During the analysis phase interviews are used with those who will use the database or are proxies for those that use the database. From here ERAs are determined to begin the modeling process.  

A distinction has to be made on what nouns, verbs all contribute to becoming ERAs with the appropriate naming convention.  Synonyms and descriptions are used in the dictionaries/glossary to provide more information about specific ERAs.  

## Cardinality  

**Relationship Maximum**: Singular - One max, Plural - Many  

**Relationship Minimum**: Specifies the least number of instances associated with each entity.  Usually 0 or 1. A relationship with zero would then be optional.  


**Attribute Max/Min**:  Similar concept but for individual attributes, i.e. singluar vs plural, zero to one, required or optional.  

**Unique Attribute** - Whereas singular/plural describes number of instances for an entity, these are unique attributes describing at most one instance.  

**Modality** - Concerns the minimum number of entity occurences within the relationship, as described above.  

**Intersection Data** - For two entities with a relationship, this is data that doesn't make sense to be an attribute exclusively of one of the entities. E.g., between a salesperson and product entity, the quantity of products sold. Usually leads to an associative entity being made. (In this previous example, a "Sales" table that shows the quantity a salesperson has sold of a specific product)  

**Unary** - Relationship to same type of entity  

**Binary** - Relationship between entities of different types  

**Ternary** - Relation between three different types, generally many-to-many-to-many

## Database Design Summary  

During the analysis phase is when much of the cardinality is discovered, whether it be implicit or explicit based on specific business rules.  The cardinality applies to both relationship and attributes.  Key concepts involve recognizing relationship cardinality in one to many for relationships (Airport-Has-Flights), (Airlines-Book-Flights)  

## Strong and Weak Entities  

Attribute cardinality - Attribute is unqiue (1/M) - Max/(Min) (Singular/Plural, Required/Not Required)  

**Strong** - Can exist as independent entity not depending on another entity.  Will have a ***Primary Key*** that will uniquely identify each instance of the entity.  Has an identifying attribute which is ***unique, singular, and required***.  

**Weak** - Depends on the strong entity, cannot exist without some association with another entity, generally depends on partial key and ***foreign key***.  Has no identifying attribute, and usually has a relationship with identifying entity.  E.g.,  a task entity with a project entity.  


## Supertype/subtype entities  

Entities(Tables) can have subtypes that get broken down from the main supertype.  The supertype keeps attributes common to all of the subtypes.  Optional attributes of a type may signal the need for subtypes.  

**Partition** - A group of mutually exclusive subtypes, do not share instances within the partition.  Partitions correspond to  supertype entity.  E.g., partion of payment card types vs. partion of brands of card types all within a card supertype.  

## Other model conventions  

Other conventions include UML, crow's foot notation for other ER diagrams, etc.  

Some other synonyms are **subject area** for related entities, and ***independent/dependent*** for strong/weak entities.  

## Entity implementation and primary keys  

Primary keys should be stable, simple, and usually meaningless.  They obviously need to be unique and not subject to change, staying simple means they generally should be a small enough data type for what is required.  Meaningless means they do not have descriptive information that may change.  

## Relationship implementation and foreign keys  

**Binary 1-N N-1:** The foreign key will usually go on the table with the many relationship.  

**Binary 1-1:** The foreign key can usually go in either side of the relationshop, whatever makes logical human sense.  One guideline you can follow is for the the entity with fewer rows to have the foreign key.  

**Many to Many:** This relationship generally needs to be broken down to an associative entity or intersection table. One strategy for the keys is to have the primary key from the other tables each combine to be a composite key.  They also can act to as the foreign key to the respective table.  

To ensure referential integrity, the foreign keys will usually have ***CASCADE*** and ***RESTRICT*** constraints on them.  

## Attribute implementation  


**Plural**: Attributes that start as plural within the initial table columns should be broken out into their own table, which can then have a composite key including a foreign key that links the tables together.  Plural attributes that have a small fixed maximum can remain in the initital table, broken down into their own column, e.g. "MealType1, MealType2, ..."  


**Attribute Types** - During analysis phase and into logical design, the attribute types for each attribute are determined and selected for implementation based on the RDMS.  


**Attribute Cardinality** - Based on attributes being unique, required, or optional  

They generally relate to the SQL UNIQUE and NOT NULL constraints.  

- Minimum Cardinality of Zero (Not required), NULL values allowed  
- Max and Min Cardinality of One, generally a PRIMARY KEY as they are unique and cannot be NULL.  
- Min Cardinality of One, required attribute, so NOT NULL  
- Max Cardinality of One, each instance must be different, so UNIQUE  

## Normalization  

**Functional Dependency** - Dependence of one column and its values on another.  B -> A read as "A depends on B"  Usually seen as redundancy within a table.  Redundancy for RDs is the idea of repetition of related values within the table. E.g. for two values (1, John Doe) being repeated.  

### First Normal Form  

Non key columns will depend on the defined primary key.  There are no duplicate rows in the table, as the primary key value will be unique from row to row.  Cells do not have mulitple values or types within it.  Not the same as just a relational table, as those can have duplicate rows and no primary key.  Non key columns can also depend on other columns still other than the primary key.  

### Second Normal Form  

All non-key columns depend on the entire primary key if the primary key is a composite one.  e.g. a situation where there is a composite key but a column is depending on just the one key.  Solution would be to break out the problem column into its own entity/table. If a table has a simple single primary key, it is already in second normal form.  

### Third Normal Form  

When all non-key columns depend completely on the primary key.  Again involves breaking out any column that is depending on the non-key column.  Officially defined when a non key column depends on a column that is unique.  

### Boyce-Codd Normal Form  



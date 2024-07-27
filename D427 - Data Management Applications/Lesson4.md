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

# ER Diagram  

**Glossary/Dictionary/Repository** - Contains specific information of the diagram described by the big three <u>ERA</u>.  

Each ERA has *types* and *instances*. Types are a set of each ERA thing, e.g. these are the column names and instances are usually an individual thing or statement, e.g. an actual piece of data inputted into the database.  

# ERA Discovery  

During the analysis phase interviews are used with those who will use the database or are proxies for those that use the database. From here ERAs are determined to begin the modeling process.  

A distinction has to be made on what nouns, verbs all contribute to becoming ERAs with the appropriate naming convention.  Synonyms and descriptions are used in the dictionaries/glossary to provide more information about specific ERAs.  

# Cardinality  

**Relationship Maximum**: Singular - One max, Plural - Many  

**Relationship Minimum**: Specifies the least number of instances associated with each entity.  Usually 0 or 1. A relationship with zero would then be optional.  


**Attribute Max/Min**:  Similar concept but for individual attributes, i.e. singluar vs plural, zero to one, required or optional.  

**Unique Attribute** - Whereas singular/plural describes number of instances for an entity, these are unique attributes describing at most one instance.  


# Database Design Summary  

During the analysis phase is when much of the cardinality is discovered, whether it be implicit or explicit based on specific business rules.  The cardinality applies to both relationship and attributes.  Key concepts involve recognizing relationship cardinality in one to many for relationships (Airport-Has-Flights), (Airlines-Book-Flights)
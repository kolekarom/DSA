-- ================================
-- SQL BASIC COMMANDS (ALL IN ONE)
-- ================================

-- 1. DDL (Data Definition Language)
-- ---------------------------------

-- Create a database
CREATE DATABASE SchoolDB;

-- Use the database (for MySQL / SQL Server)
USE SchoolDB;

-- Create a table
CREATE TABLE Students (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    email VARCHAR(100)
);

-- Alter table (add a new column)
ALTER TABLE Students ADD grade VARCHAR(10);

-- Truncate table (remove all data but keep structure)
-- TRUNCATE TABLE Students;

-- Drop table
-- DROP TABLE Students;


-- 2. DML (Data Manipulation Language)
-- -----------------------------------

-- Insert data into table
INSERT INTO Students (id, name, age, email, grade)
VALUES (1, 'Om', 20, 'om@mail.com', 'A'),
       (2, 'Sushant', 22, 'sushant@mail.com', 'B'),
       (3, 'Priyanka', 19, 'priyanka@mail.com', 'A');

-- Update data
UPDATE Students SET grade = 'A+' WHERE id = 1;

-- Delete a record
DELETE FROM Students WHERE id = 3;


-- 3. DQL (Data Query Language)
-- ----------------------------

-- Select all data
SELECT * FROM Students;

-- Select specific columns
SELECT name, grade FROM Students;

-- Apply condition
SELECT * FROM Students WHERE age > 20;


-- 4. DCL (Data Control Language)
-- ------------------------------

-- Grant permission (depends on DBMS)
GRANT SELECT, INSERT ON Students TO user1;

-- Revoke permission
REVOKE INSERT ON Students FROM user1;


-- 5. TCL (Transaction Control Language)
-- -------------------------------------

-- Start a transaction
START TRANSACTION;

-- Insert sample data
INSERT INTO Students (id, name, age, email, grade)
VALUES (4, 'Saraswati', 21, 'sara@mail.com', 'B');

-- Savepoint
SAVEPOINT sp1;

-- Update data
UPDATE Students SET grade = 'A' WHERE id = 4;

-- Rollback to savepoint
ROLLBACK TO sp1;

-- Commit changes
COMMIT;

/*Solve the following question:

Q] Create a databse for a company named XYZ.
Then Create a table inside this DB to store the employee info (id , name and salary).
Now, Add the following information in you databse
1, "adam", 25000
2, "bob", 30000
3, "casey", 40000

Lastly, Select & View your table data.
*/

CREATE DATABASE XYZ;
USE XYZ;
CREATE TABLE employee
(
    id INT PRIMARY KEY,
    name BLOB,
    salary float
);

INSERT INTO employee(name , salary , id) VALUES("adam" , 25000 , 1);
INSERT INTO employee(name , salary , id) VALUES("bob" , 30000 , 2);
INSERT INTO employee(name , salary , id) VALUES("casey" , 40000 , 3);

SELECT * FROM employee;
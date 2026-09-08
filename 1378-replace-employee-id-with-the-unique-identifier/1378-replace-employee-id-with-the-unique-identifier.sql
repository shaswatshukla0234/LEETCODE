/* Write your PL/SQL query statement below */
SELECT E1.unique_id,E2.name FROM EmployeeUNI E1 RIGHT JOIN Employees E2 ON E1.id = E2.id ;
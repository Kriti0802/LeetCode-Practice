/*Write an SQL query to find the employees who earn more than their managers.

Return the result table in any order.*/

# Write your MySQL query statement below

select e1.name as Employee from Employee e1,Employee e2 where  e1.managerId=e2.id and e1.salary>e2.salary;

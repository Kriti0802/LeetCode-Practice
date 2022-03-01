/*Write an SQL query to report all customers who never order anything.

Return the result table in any order.*/

select name as customers from Customers where id not in (select customerId from Orders);


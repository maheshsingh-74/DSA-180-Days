# Write your MySQL query statement below
select   name as Customers  from  Customers 
where (id) not in (
select (c.id) from 
Customers c right join 
Orders o on c.id= o.customerId
)

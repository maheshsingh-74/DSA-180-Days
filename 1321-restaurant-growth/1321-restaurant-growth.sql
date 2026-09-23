/* Write your T-SQL query statement below */

with cte as (
select visited_on,sum(amount) as amount
from Customer group by 
visited_on)
select visited_on,
sum(amount) over (order by visited_on rows between 6 preceding  and current row )as amount,
round(avg(1.0*amount) over(order by visited_on rows between 6 preceding  and current row),2)as average_amount 
from cte 
order by visited_on
offset 6 rows;
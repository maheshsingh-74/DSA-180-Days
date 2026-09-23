/* Write your T-SQL query statement below */
with cte as (
  select requester_id, accepter_id
  from RequestAccepted
  union all
  select accepter_id as requester_id, requester_id as accepter_id
  from RequestAccepted
)
select top 1 requester_id as id, count(accepter_id) as num
from cte
group by requester_id
order by num desc;
# Write your MySQL query statement below
select s.user_id , ifnull(round(sum(c.action='confirmed')/count(*),2),0.00) 
as 'confirmation_rate'
from signups s 
left join Confirmations c
on s.user_id=c.user_id
group by s.user_id

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
# Write your MySQL query statement below

select round(count(distinct player_id)/(select count(distinct player_id) from Activity),2) as fraction from Activity
where (player_id, date_sub(event_date,interval 1 day))
in (select player_id , min(event_date) from Activity
group by player_id)

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
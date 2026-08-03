# Write your MySQL query statement below
select p.project_id ,round(avg(e.experience_years),2)
as 'average_years' from project p left join
Employee e on 
p.employee_id=e.employee_id 
group by (p.project_id)

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
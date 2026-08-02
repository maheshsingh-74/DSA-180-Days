# Write your MySQL query statement below
select e1.name , e2.bonus from Employee e1 left join Bonus e2 on e1.empId 
=e2.empId where e2.bonus is null or e2.bonus<1000;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
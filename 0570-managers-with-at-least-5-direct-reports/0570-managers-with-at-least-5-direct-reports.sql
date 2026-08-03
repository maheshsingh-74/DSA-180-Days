# Write your MySQL query statement below
Select e1.name from Employee e1
inner join Employee e2 on 
e1.id=e2.managerId group by 
e2.managerId having
 count(e2.managerId)>=5;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
# Write your MySQL query statement below
 select id , movie , description , rating 
 from Cinema where (id%2=1) AND description != 'boring' order by
 rating desc

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
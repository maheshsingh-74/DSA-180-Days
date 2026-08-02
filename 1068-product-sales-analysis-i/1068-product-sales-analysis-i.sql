# Write your MySQL query statement below
select e1.product_name, e2.year, e2.price from Sales e2 left join Product e1 on e1.product_id=e2.product_id;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
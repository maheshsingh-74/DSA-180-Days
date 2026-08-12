# Write your MySQL query statement below
select product_id,
year as first_year, quantity, price 
from Sales
WHERE 
    (product_id, year) IN (
        SELECT 
            product_id, 
            MIN(year) 
        FROM 
            Sales 
        GROUP BY 
            product_id
    );

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
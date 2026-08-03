SELECT 
    DATE_FORMAT(trans_date, '%Y-%m') AS month, 
    country, 
    COUNT(id) AS trans_count, 
    SUM(state = 'approved') AS approved_count, 
    SUM(amount) AS trans_total_amount, 
    SUM(IF(state = 'approved', amount, 0)) AS approved_total_amount 
FROM transactions 
GROUP BY month, country;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
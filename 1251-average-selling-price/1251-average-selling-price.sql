# Write your MySQL query statement below
select p.product_id,ifnull(Round(sum(p.price*u.units)/sum(u.units),2),0) 
as 'average_price' from Prices p
left join UnitsSold u on 
p.product_id =u.product_id and 
u.purchase_date between p.start_date AND p.end_date 
group by p.product_id

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
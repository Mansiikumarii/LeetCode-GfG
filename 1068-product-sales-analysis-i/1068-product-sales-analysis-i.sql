# Write your MySQL query statement below
select product_name, year ,price 
from product join Sales
where sales.Product_id = Product.Product_id;
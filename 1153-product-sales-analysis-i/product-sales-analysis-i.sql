select t2.product_name,t1.year,t1.price
from Sales as t1
left join Product t2 using(product_id)
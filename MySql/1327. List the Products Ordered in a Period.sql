# Write your MySQL query statement below
select p.product_name as product_name, sum(o.unit) as unit
from products p join orders o using (product_id)
WHERE order_date BETWEEN '2020-02-01' AND '2020-02-29'
group by p.product_id
having sum(o.unit)>=100

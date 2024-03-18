# Write your MySQL query statement below
with ranked as (
    select product_id, new_price, rank() over(
        partition by product_id
        order by change_date desc
    )as r
    from products
    where change_date <='2019-08-16'
),
productprice as (
    select product_id ,new_price
    from ranked
    where r=1
)

select p.product_id, ifnull(productprice.new_price,10) as price
from products p left join productprice
using(product_id)
group by 1

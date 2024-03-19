# Write your MySQL query statement below
select person_name 
from (
    select person_name, sum(weight) over ( order by turn ) as s from queue
    )q 
where s <= 1000 
order by s desc 
limit 1    

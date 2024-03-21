# Write your MySQL query statement below
SELECT row_number() over( order by if(mod(id,2)=0,id-1,id+1)) as id,student
from seat

# Write your MySQL query statement below
with tab as(
    select requester_id as id, count(requester_id) as count
    from RequestAccepted
    group by requester_id
    union all
    select accepter_id as id, count(accepter_id) as count
    from RequestAccepted
    group by accepter_id
)


select id, sum(count) as num
from tab
group by id 
order by num desc
limit 1  

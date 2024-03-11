# Write your MySQL query statement below
SELECT query_name, round(avg(rating/position),2) as quality, 
round(sum(rating <3)*100/count(*),2) as poor_query_percentage
FROM Queries
where query_name is not null 
group by query_name

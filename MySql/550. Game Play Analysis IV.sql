# Write your MySQL query statement below
SELECT round(count(distinct player_id)/(select count(distinct player_id) from Activity),2) as fraction
FROM Activity
WHERE (player_id, DATE_SUB(event_date,INTERVAL 1 day))
IN (SELECT player_id, MIN(event_date)
from Activity
GROUP BY player_id)

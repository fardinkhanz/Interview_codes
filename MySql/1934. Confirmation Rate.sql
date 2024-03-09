# Write your MySQL query statement below
SELECT s.user_id, round(avg(if(c.action='confirmed',1,0)),2) as confirmation_rate
From Signups s left join Confirmations c using (user_id) 
GROUP BY s.user_id

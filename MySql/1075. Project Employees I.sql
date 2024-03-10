# Write your MySQL query statement below
SELECT p.project_id , ROUND(AVG(e.experience_years),2) AS average_years
FROM Project p inner join Employee e on p.employee_id=e.employee_id
GROUP by p.project_id

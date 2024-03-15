# Write your MySQL query statement below
SELECT employee_id, department_id 
FROM Employee
WHERE primary_flag='Y' or employee_id in( 
SELECT employee_id
FROM Employee
GROUP BY employee_id
Having (Count(department_id)=1)) 

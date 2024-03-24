# Write your MySQL query statement below
select D.name as Department, E.name as Employee, E.salary as Salary
from Employee E left join Employee E2 on E.DepartmentId=E2.DepartmentId and   E.salary < E2.salary
join Department D
on D.id = E.DepartmentId
group by E.Id
having count(distinct E2.salary) < 3

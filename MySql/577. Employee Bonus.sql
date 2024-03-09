# Write your MySQL query statement below
SELECT  name, bonus FROM Employee left join Bonus on employee.empID =Bonus.empID WHERE Bonus.bonus<1000 OR Bonus.bonus is NULL

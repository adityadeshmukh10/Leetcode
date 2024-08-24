# Write your MySQL query statement below
select e.name, b.Bonus
from Employee e LEFT join Bonus b
on e.EmpId=b.EmpId
WHERE b.bonus<1000 OR Bonus IS NULL
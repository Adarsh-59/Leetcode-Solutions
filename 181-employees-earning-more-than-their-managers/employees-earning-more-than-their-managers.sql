# Write your MySQL query statement below
SELECT name as Employee
FROM Employee as e1
WHERE e1.salary > (
  select salary
  from employee as e2
  where e2.id = e1.managerid
)

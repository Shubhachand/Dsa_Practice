# Write your MySQL query statement below
SELECT n.name  as Employee
FROM Employee as n
JOIN Employee as m
ON n.managerId = m.id
Where n.salary > m.salary 
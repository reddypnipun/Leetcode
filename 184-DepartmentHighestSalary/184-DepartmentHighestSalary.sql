-- Last updated: 8/22/2026, 10:14:54 AM
select Department.name as Department , Employee.name as Employee , salary as Salary
from  Employee
join Department on departmentId = Department.id
WHERE (departmentId, salary) IN (
    SELECT departmentId, MAX(salary)
    FROM Employee
    GROUP BY departmentId
);
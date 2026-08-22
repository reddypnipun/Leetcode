-- Last updated: 8/22/2026, 10:14:56 AM
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N=N-1;
  RETURN (  
    SELECT DISTINCT salary AS getNthHighestSalary
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET N   
  );
END
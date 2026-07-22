CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    
    with cte as(  # Write your MySQL query statement below.
    SELECT DISTINCT  salary, dense_rank() over(order by salary desc) as rn FROM Employee
    )

    select salary as getNthHighestSalary from cte
    where rn = N

  );
END
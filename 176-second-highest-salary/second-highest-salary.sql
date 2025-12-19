# Write your MySQL query statement below
select 
    case
        when count(distinct salary)<2 then null
        else(
            select distinct salary  from Employee 
          order by salary desc limit 1 OFFSET 1
        )
     END AS SecondHighestSalary
     from employee;  

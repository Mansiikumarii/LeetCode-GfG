# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary from Employee e
 join Department d on e.departmentID = d.ID
where e.salary= (select max(e2.salary) from employee e2 where e2.departmentId = e.departmentId)
select empid.unique_id,emp.name
from Employees as emp
LEFT JOIN EmployeeUNI as empid
ON emp.id = empid.id;
select e1.name
from Employee as e1
LEFT JOIN Employee as e2
ON e1.id = e2.managerId 
where e2.managerId is not null
group by e2.managerId
having count(e2.managerId) >= 5;
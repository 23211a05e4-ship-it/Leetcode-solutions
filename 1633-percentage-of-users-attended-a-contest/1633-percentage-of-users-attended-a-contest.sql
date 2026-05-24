select r.contest_id as contest_id, ROUND ( COUNT(r.user_id) * 100.0 / (SELECT COUNT(*) FROM Users),2) AS percentage
from Register as r
LEFT JOIN Users as u
ON r.user_id = u.user_id 
group by r.contest_id
order by percentage desc,contest_id;
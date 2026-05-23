select v.customer_id,count(v.customer_id) as count_no_trans 
from Visits as v
LEFT JOIN Transactions as t
ON v.visit_id = t.visit_id
where t.transaction_id  is NULL
group by v.customer_id;
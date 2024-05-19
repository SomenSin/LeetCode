select customer_id, count(*) as count_no_trans
from Visits v
left join Transactions t using(visit_id)
where t.visit_id is null
group by customer_id;

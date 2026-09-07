# Write your MySQL query statement below
select p.product_name,sum(o.unit) as unit
from Products  p join Orders o
on o.product_id=p.product_id
WHERE o.order_date LIKE '2020-02-%'

group by o.product_id
having sum(o.unit)>99 ;
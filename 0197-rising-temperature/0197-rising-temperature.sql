select w1.id
from Weather as w1
join Weather as w2
ON w1.recordDate = w2.recordDate + Interval 1 DAY
WHERE w1.temperature > w2.temperature;
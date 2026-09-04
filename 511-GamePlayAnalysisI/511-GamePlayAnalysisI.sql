-- Last updated: 9/4/2026, 10:00:36 PM
select player_id,min(event_date) as first_login
from Activity
group by player_id
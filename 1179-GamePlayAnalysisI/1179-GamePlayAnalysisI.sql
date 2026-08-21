-- Last updated: 8/22/2026, 12:58:06 AM
select player_id,min(event_date) as first_login
from Activity
group by player_id
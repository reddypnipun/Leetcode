-- Last updated: 8/22/2026, 12:58:12 AM
SELECT
Person.firstName,
Person.lastName,
Address.city,
Address.state
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;
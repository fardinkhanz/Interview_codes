# Write your MySQL query statement below
with min_id as(
    select min(id) as id
    from Person
    group by email
)

delete from person
where id not in(
    select id
    from min_id
)

# Write your MySQL query statement below
select DISTINCT(author_id) as id from Views WHERE author_id = viewer_id ORDER BY id ASC;
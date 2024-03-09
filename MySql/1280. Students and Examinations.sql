# Write your MySQL query statement below
SELECT s.student_id, s.student_name,sub.subject_name, count(e.subject_name) as attended_exams
FROM Students s CROSS JOIN Subjects sub LEFT JOIN Examinations e on s.student_id=e.student_id
and sub.subject_name=e.subject_name GROUP BY s.student_id, s.student_name, sub.subject_name
Order by s.student_id, sub.subject_name   

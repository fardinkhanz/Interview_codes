SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(DISTINCT student) > 4;

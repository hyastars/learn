##Query Students Names and Ages

SELECT
    Sname,
    DATEDIFF(YEAR, Sbrithdate, GETDATE()) AS age 
FROM
    Student;

##Query the Grades of Students Who Selected Courses and Sort Them

SELECT
    Sno,
    Grade,
FROM
    SC  
WHERE
    Cno = '81002'
ORDER BY
    Grade DESC,
    Sno;

##Query Information of Students with Grades in a Certain Range for a Specific Course

SELECT
    Sno,
    Grade
FROM
    SC  
WHERE
    Cno = '81003' AND Grade BETWEEN 85 AND 90;

##Query the Situation of Students in Specific Majors

SELECT
    Sno,
    Sname,
    Ssex,
    Sbrithdate,
    Smajor
FROM
    Student
WHERE
    Smajor IN('计算机科学与技术', '数据科学与大数据技术');

##Query Students and the Names of Their Selected Courses

SELECT
    Student.Sno,
    Sname,
    Ssex,
    Sbirthdate,
    Smajor,
    Cname
FROM
    Student
JOIN
    SC on Student.Sno = SC.Sno
JOIN 
    Course on SC.Sno = Course.Con;

##Query Information of Students Who Selected the Designated Course

SELECT
    Student.Sno,
    Sname,
    Grade
FROM
    Student
JOIN 
    SC on Student.Sno = SC.Sno
WHERE
    SC.Cno = '81003';

##Query the Indirect Prerequisite Courses of Courses

SELECT
    First.Cno,
    Second.Cpno
FROM
    Course First
JOIN
    Course Second ON First.Cpno = Second.Cno
Where
    Second.Cpno NOT NULL;

##Query the Total Credits of the Courses Selected by Students

SELECT SUM(Ccredit) AS TotalCredit
FROM
    SC
JOIN 
    Course ON SC.Cno = Course.Cno
WHERE
    SC.Sno = '2018001';

##Query the Number of Students Who Selected Each Course

SELECT
    Course.Cno,
    COUNT(SC.Sno) AS StudentCount
FROM
    SC
JOIN
    Course on SC.Cno = Course.Cno
Group by
    Course.Cno;

##Query the Student Numbers of Those Who Selected Multiple Courses

SELECT
    Sno
FROM
    SC
GROUP BY
    Sno
HAVING
    COUNT(Cno) > 2;






































































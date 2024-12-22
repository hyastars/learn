##关于学生表（Student）中主键定义的两种方式及插入数据操作

CREATE TABLE Student(
    Sno CHAR(8) PRIMARY KAY,
    Sname VARCHAR(20) UNIQUE,
    Ssex CHAR(6),
    Sbirthdate DATE,
    Smajor VARCHAR(20)
);

CREATE TABLE Student(
    Sno CHAR(8),
    Sname VARCHAR(20) UNIQUE,
    Ssex CHAR(),
    Sbrithdate DATE,
    Smajor VARCHAR(20),
    PRIMARY KAY(Sno)
);

##插入数据操作

INSERT INTO Student(Sno, Sname, Ssex, Sbrithdate, Smajor) VALUES
('2018001', '李勇', '男', '2000-3-8', '信息安全');

##重复插入学号相同学生记录

INSERT INTO Student(Sno, Sname, Ssex, Sbrithdate, Smajor) VALUES
('20180001', '李勇', '女', '2000-3-8', '信息安全');

##更新学生表中学号的操作

UPDATE Student
SET Sno = '20180001',
WHERE Sno = '20180001';

##课程表（Course）相关操作（创建、插入、更新）

CREATE TABLE Course(
    Cno CHAR(5) PRIMARY KEY,
    Cname VARCHAR(40) NOT NULL,
    Ccredit SMALLINT,
    Cpno CHAR(5),
    FOREIGN KEY (cpno) REFERENCES Course(Cno)
);

##插入课程数据

INSERT INTO Course(Cno, Cname, Ccredit, Cpno) VALUES
('81001', '程序设计基础与C语言', 4, NULL),
('81002', '程序设计基础与C语言', 4, NULL);

##更新课程编号的操作

UPDATE Course
SET Cno = '81001',
WHERE Cno = '81002';

##学生选课表（SC）相关操作（创建、插入、更新）

CREATE TABLE SC(
    Sno CHAR(8),
    Cno CHAR(5),
    Grade SMALLINT,
    Semester CHAR(5),
    Teachingclass CHAR(8),
    PRIMARY KEY(Sno, Cno),
    FOREIGN KEY(Sno) REFERENCES Student(Sno),
    FOREIGN KEY(Cno) REFERENCES Course(Cno)
);

## 插入学生选课数据

INSERT INTO SC(Sno, Cno, Grade, Semester, Teachingclass) VALUES
('20180001', '81001', 85, '20192', '81001-01'),
('20180001', '81002', 85, '20192', '81001-01');

##重复更新课程编号的操作

UPDATE Course
SET Cno = '81001'
WHERE Cno = '81002';






















































































































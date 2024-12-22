##建立 SC 表并插入记录

CREATE TABLE SC(
    Sno CHAR(8),
    Cno CHAR(5),
    Grade SMALLINT,
    PRIMARY KEY(Sno, Cno),
    FOREIGN KEY(Sno) REFERENCES Student(Sno)
    ON DELETE CASCADE
    ON UPDATE CASCADE,
    FOREIGN KEY(Cno) REFERENCES Course(Cno)
    ON DELETE CASCADE
    ON UPDATE CASCADE
);

##插入记录操作
 
INSERT INTO SC(Sno, Cno, Grade) VALUES
('20180001', '81001', 85),
('20180001', '81002', 96),
('20180001', '81003', 87),
('20180002', '81001', 80),
('20180002', '81002', 98),
('20180002', '81003', 71),
('20180003', '81001', 81),
('20180003', '81002', 76),
('20180004', '81001', 56),
('20180004', '81003', 97),
('20180205', '81003', 68);

##练习违反参照完整性的插入数据

INSERT INTO SC(Sno, Cno, Grade) VALUES
('20180001', '81001', 99);

##练习级联删除

DELETE FROM Student
WHERE Sno = '2018001';

DELETE FROM Course
WHERE Cno='81001';


##建立教师授课和教师听课关系的两张表

CREATE TABLE Teach(
    Tname VARCHAR(30),
    Cname VARCHAR(50) NOT NULL PRIMARY KEY
);

##创建 Listen 表

CREATE TABLE Listen(
    Tname VARCHAR(30) PRIMARY KEY,
    Cname VARCHAR(50) NOT NULL,
    FOREING KEY(Cname) REFERENCE Teach(Cname)
    ON DELETE CASCADE
    ON UPDATE CASCADE
);































































































































































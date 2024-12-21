##Create Student Table

CREATE TABLE Student{
    Sno CHAR(8) PRIMARY KEY,
    Sname VARCHAR(20) UNIQUE,
    Ssex CHAR(1),
    Sbirthdate DATE,
    Smajor VARCHAR(40)
};

##Insert Student Table

Insert into Student(Sno, Sname, Ssex, Sbirthdate, Smajor) VALUES
('2018001', '李勇', '男', '2000-03-08', '数据安全'),
('2018002', '刘晨', '女', '1999-09-01', '计算机科学与技术'),
('20180002', '王敏', '女', '2001-08-01', '计算机科学与技术'),
('20180003', '张立', '男', '2000-01-08', '计算机科学与技术'),
('20180205', '陈新奇', '男', '2001-11-01', '信息管理与信息系统'),
('20180306', '赵明', '男', '2000-06-12', '数据科学与大数据技术'),
('20180307', '王佳佳', '女', '2001-12-07', '数据科学与大数据技术');

##Create Course Table

CREATE TABLE Course(
    Con CHAR(5) PRIMARY KEY,
    Cname VARCHAR(10) NOT NULL,
    Ccredit SMALLINT,
    Cpon CHAR(5),
    FOREIGN KEY (Cpon) REFERENCE Course(Con)
);

##Insert Course Date

INSERT INTO Course(Con, Cname, Ccredit, Cpon) VALUES
('81001', '程序设计基础与C语言', 4, NULL),
('81002', '数据结构', 4, '81001'),
('81003', '数据库系统概论', 4, '81002'),
('81004', '信息系统概论', 4, '81003'),
('81005', '操作系统', 4, '81001'),
('81006', 'Python语言', 3, '81002'),
('81007', '离散数学', 4, NULL),
('81008', '大数据技术概论', 4, '81003');

##Create Student Course Selection Table

CREATE TABLE SC (
    Sno CHAR(8),
    Con CHAR(5),
    Grade SMALLINT,
    Semester CHAR(5),
    Teachingclass CHAR(8),
    PRIMARY KEY(Sno, Cno),
    FOREIGN KEY(Sno) REFERENCES Student(Sno),
    FOREIGN KEY(Cno) REFERENCES Course(Cno)
);

##Insert Student Course Selection Date

INSERT INTO SC (Sno, Cno, Grade, Semester, Teachingclass) VALUES
('20180001', '81001', 85, '20192', '81001-01'),
('20180001', '81002', 96, '20201', '81002-01'),
('20180001', '81003', 87, '20202', '81003-01'),
('20180002', '81001', 80, '20192', '81001-02'),
('20180002', '81002', 98, '20201', '81002-01'),
('20180002', '81003', 71, '20202', '81003-02'),
('20180003', '81001', 81, '20192', '81001-01'),
('20180003', '81002', 76, '20201', '81002-02'),
('20180004', '81001', 56, '20192', '81001-02'),
('20180004', '81003', 97, '20201', '81002-02'),
('20180205', '81003', 68, '20202', '81003-01');

##Select SC Table

SELECT * FROM SC;











































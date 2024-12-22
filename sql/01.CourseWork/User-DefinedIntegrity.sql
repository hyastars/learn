## 创建 worker 表

CREATE TABLE worker(
    Num CHAR(5) PRIMARY KEY,
    Name CHAR CONSTRAINT U1 UNIQUE,
    Sex CHAR(1) CHECK (Sex IN ('男', '女')),
    Sage INT CONSTRAINT U2 CHECK (Sage <= 28),
    Department CHAR(20)
);

## 在 worker 表中插入一条合法记录

INSERT INTO worker(Num, Name, Sex, Sage, Department) VALUES
('W0001', '张三', '男', 25, '技术部');

##练习插入违反 U2 约束的例子

INSERT INTO worker(Num, Name, Sex, Sage, Department) VALUES
('W0002', '李四', '男', 30, '市场部');

##去除 U2 约束

ALTER TABLE worker DROP CONSTRAINT U2;

##重新插入（3）中想要插入的数据

INSERT INTO worker VALUES ('W0002', '李四', '男', 30, '市场部');

##加入约束 U3，令 Sage 的值 >=0

ALTER TABLE worker ADD CONSTRAINT U3 CHECK (Sage >= 0);



















#include<iostream>
#include<string>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

struct teacher {
    int id;
    string name;
    int age;
    struct student stu;
};

int main() {
    teacher t;
    t.id = 14;
    t.name = "miku";
    t.age = 50;
    t.stu.name = "qa";
    t.stu.age = 20;
    t.stu.score = 30;

    cout << t.id << " " << t.stu.age <<" "<< t.stu.score << endl;
    
    return 0;
};


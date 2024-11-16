#include<iostream>
#include<string>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

void printStudent1(struct student s) {
    cout << " name:" << s.name << " age:" <<s.age <<" score:" <<s.score<< endl;
};

void printStudent2(struct student *p) {
    cout << " name:" << p->name << " age:" <<p->age <<" score:" <<p->score<< endl;
};


int main() {

    struct student s;
    s.name = "miku";
    s.age = 20;
    s.score = 85;

    student *p = &s;

    printStudent1(s);
    printStudent2(&s);

    // cout << s.name << s.age << s.score << endl;

};
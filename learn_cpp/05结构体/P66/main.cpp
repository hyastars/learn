#include<iostream>
#include<string>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main() {
    struct student s = {"nike",18,90};

    student *p = &s;

    cout << p->name <<" "<< p->age << p->score << endl;


}

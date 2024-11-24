#include<iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

void printStudents(const student s) {
    s->age = 16;
    cout << "name:" << s.name << " age:" << s.age <<" score:"<< s.score << endl;
}

int main() {
    struct student s = {"miku",14,155};
    return 0;

}
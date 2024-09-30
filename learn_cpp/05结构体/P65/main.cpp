#include<iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    struct Student stuArray[3] = {
        {"张三1",18,23},
        {"张三2",13,2433},
        {"张三3",12,232},
    };

    stuArray[1].name = "nikeyou";
    stuArray[2].age =  78;

    for(int i=0;i < 3;i++) {
        cout << stuArray[i].name << " " << stuArray[i].age << " " << stuArray[i].score << endl;
    };

    return 0;
}
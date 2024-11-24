#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
}s3;

int main() {
    struct Student s1;
    s1.name = "miku";
    s1.age = 18;
    s1.score = 100;
    cout << s1.name << " "<< s1.age << " "<<  s1.score <<  " "<< endl;

    struct Student s2 = { "lisi", 15 , 82};
    cout << s2.name << " "<< s2.age << " "<<  s2.score <<  " "<< endl;

    s3.name = "miku1";
    s3.age = 181;
    s3.score = 1001;
    cout << s3.name << " "<< s3.age << " "<<  s3.score <<  " "<< endl;

    return 0;
}
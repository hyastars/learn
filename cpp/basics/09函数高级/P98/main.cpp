#include<iostream>
using namespace std;

void func(int &a) {
    cout << "func(int &a)" << endl;
}

void func(const int &a) {
    cout << "func(const int &a)" << endl;
}

void func2(int a,int b = 10) {
    cout << "func2(int a,int b = 10)" << endl;
}

void func2(int a) {
    cout << "func2(int a)" << endl;
}

int main() {
    int a = 10;
    func(a);
    func(10);
    func2(10,32);
    return 0;
}
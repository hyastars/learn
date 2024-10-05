#include<iostream>
using namespace std;

void func() {
    cout << "func()" << endl;
}

void func(int a) {
    cout << "func(int a)" << endl;
}

void func(double a) {
    cout << "func(double a)" << endl;
}

void func(int a,double b) {
    cout << "func(int a,double b)" << endl;
}

void func(double a,int b) {
    cout << "func(double a,int b)" << endl;
}

int main() {
    func();
    func(12);
    func(2.12);
    func(2,2.12);
    func(2.12,3);

    return 0;
}
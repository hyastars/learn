#include<iostream>
using namespace std;

void mySwap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void mySwap02(int *a ,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mySwap03(int &a ,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    // mySwap01(a , b);
    // mySwap02(&a , &b);
    mySwap03(a , b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
#include<iostream>
using namespace std;

int& test01() {
    int a = 10;
    return a;
}

int& test02() {
    static int b = 10;
    return b;
}

int main() {
    int &ref = test02();
    cout << "ref=" << ref << endl;
    cout << "ref=" << ref << endl;
}

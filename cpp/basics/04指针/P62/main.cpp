#include <iostream>
using namespace std;

// 交换两个整数的值
void swap_ptr(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 交换两个指针指向的整数的值
void swap_num(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "P1 is " << *p1 << endl;
    cout << "P2 is " << *p2 << endl;

    cout << "\n";

    // 交换整数 a 和 b 的值
    swap_ptr(a, b);
    cout << "After swap_ptr:" << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "P1 is " << *p1 << endl;
    cout << "P2 is " << *p2 << endl;
    cout << "\n";

    // 交换指针 p1 和 p2 指向的整数的值
    swap_num(p1, p2);
    cout << "After swap_num:" << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "P1 is " << *p1 << endl;
    cout << "P2 is " << *p2 << endl;

    return 0;
}

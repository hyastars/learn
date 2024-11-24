#include <iostream>
using namespace std;

int func(int a, int b = 10, int c = 20) {
    return a + b + c;
}

int func2(int a = 0, int b = 10, int c = 20);

int func2(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "ret = " << func(23) << endl;
    cout << "ret = " << func2() << endl;

    return 0;
}

#include <iostream>
using namespace std;

void print(int num) {
    for (int i = 31; i >= 0; i--) {
        cout << ((num & (1 << i)) == 0 ? '0' : '1');
    }
    cout << endl;
}

int main() {
    int num = 5; // 示例数值
    print(num);
    return 0;
}

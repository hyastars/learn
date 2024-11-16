#include <iostream>
using namespace std;

int* func() {
    int* p = new int(10);
    return p;
}

void test01() {
    int* p = func();
    cout << *p << endl;

    delete p;
    p = nullptr; 
    if (p != nullptr) {
        cout << *p << endl;
    } else {
        cout << "Pointer is null after deletion." << endl;
    }
}

void test02() {
    int* arr = new int[10]; 
    if (arr == nullptr) {
        cout << "Array allocation failed!" << endl;
        return;
    }

    cout << "Array allocated." << endl;  

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;  
        cout << "arr[" << i << "] = " << arr[i] << endl;  
    }

    cout << "Array values: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Value at arr[" << i << "] = " << arr[i] << endl;  
    }

    delete[] arr;  
    cout << "Array deleted." << endl;  
}



int main() {
    test01();
    test02();
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "spaces: " << sizeof(arr) << endl;
    cout << "space: " << sizeof(arr[0]) << endl;
    cout << "num: " << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "arraddr: " << (long)arr << endl;
    cout << "arrfirstaddr: " << (long)&arr[0] << endl;
    cout << "arrlastaddr: " << (long)&arr[9] << endl;

    }
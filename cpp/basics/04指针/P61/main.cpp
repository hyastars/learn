#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p ;
     for(int i=0;i<10;i++) {
        p=&arr[i];
        cout << "这是第" << i << "个数 " ;
        cout << "num is " << *p << " ";
        cout << "ptr is " << dec << (uintptr_t)p << endl;
     }
     
      cout << "\n" << endl;

     int * ptr = arr;
     for(int i=0;i<10;i++) {
        cout << "这是第" << i << "个数 " ;
        cout << "num is " << * ptr << " ";
        cout << "ptr is " << dec << (uintptr_t)ptr << endl;     
        ptr++;
        }

}
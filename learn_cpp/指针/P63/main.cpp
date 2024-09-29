#include <iostream>
using namespace std;

void BulleSort(int * arr , int len);

int main() {
    int arr[10] = { 3,4,1,3,66,23,13,51234,34,42};
    int len = sizeof(arr)/sizeof(arr[0]);
    BulleSort(arr , len);
     cout << "the order by desc is : " ;
    for (int i = 0;i < 10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BulleSort(int * arr , int len) {
        for (int i = 0; i < len -1 ;i++) {
            for (int j=0;j<len-1-i;j++) {
                if(arr[j]>arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

    }
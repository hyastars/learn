#include <iostream>
using namespace std;

void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;

}


int main() {
    int arr[5] = {300,350,200,400,250};

    int *max = &arr[0];

    for(int i = 0;i < 4;i++) {
        max = (arr[i] > arr[i+1]) ? &arr[i] : &arr[i+1];
    }

    cout << "the bigest num is : " << *max << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 ; j++) {
                if (arr[j] < arr[j+1]) {
                    swap(&arr[j] ,&arr[j+1] );
                }
        }
    }
 
     cout << "the order by desc is : " ;
    for (int i = 0;i < 5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
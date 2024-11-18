#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

void selectionsort(vector<int>& arr){
    int n = arr.size();
    for(int i=0 ;i<n-1 ;i++){
        int min = i;
        for(int j=i+1 ;j<n ;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i] ,arr[min]);
    }
}

int main(){
    vector<int> arr(12);
    unsigned seed = static_cast<unsigned>(chrono::system_clock::now().time_since_epoch().count());
    default_random_engine engine(seed);
    uniform_int_distribution<int> dis(10,99);

    for(int i=0 ;i<12 ;i++){
        arr[i] = dis(engine);
    }

    cout << "Unsort array: ";
    for(int i=0 ;i<12 ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    auto start = chrono::high_resolution_clock::now();

    selectionsort(arr);

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    cout << "Sort arry: ";
    for(int i=0 ;i<12 ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    if(duration.count() < 1000){
        cout << "Time taken : " << duration.count() << "ns " << endl;
    } else if(duration.count() < 10000){
        cout << "Time taken : " << duration.count()/1000.0 << " us " << endl;
    } else if(duration.count() < 1000000000){
        cout << "Time taken : " << duration.count()/1000000.0 <<  " ms " << endl; 
    } else {
        cout << "Time taken : " << duration.count()/1000000000.0 << " s " << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = static_cast<int>(arr.size()); // 将 size_t 转换为 int
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr(12);
    unsigned seed = static_cast<unsigned int>(chrono::system_clock::now().time_since_epoch().count()); // 确保 seed 的类型正确
    default_random_engine engine(seed);
    uniform_int_distribution<int> dist(10, 99); // 生成10到99之间的随机数

    // 生成12位随机数组
    for (int i = 0; i < 12; i++) {
        arr[i] = dist(engine);
    }

    // 输出未排序的数组
    cout << "Unsorted array: ";
    for (int i = 0; i < 12; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 开始计时
    auto start = chrono::high_resolution_clock::now();

    // 排序数组
    bubbleSort(arr);

    // 结束计时
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    // 输出已排序的数组
    cout << "Sorted array: ";
    for (int i = 0; i < 12; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 根据时间长短选择合适的单位输出
    if (duration.count() < 1000) {
        cout << "Time taken : " << duration.count() << " us" << endl;
    } else if (duration.count() < 1000000) {
        cout << "Time taken : " << duration.count() / 1000.0 << " ms" << endl;
    } else {
        cout << "Time taken : " << duration.count() / 1000000.0 << " s" << endl;
    }

    return 0;
}
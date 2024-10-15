#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums , int val) {
        int k = 0;
        for (int i = 0; i < nums.size() ; i++) {
            for(num[i] != val) {
                nums[k++] = nums[i];
            }
        }
    }
};

int main() {
    Solution solution;
    int n,val;

    cout << "请输入数组大小: ";
    cin >> n;
    cout << "请输入要移除的值: ";
    cin >> val;

    vector<int> nums(n);

    cout << "请输入数组元素：";
    for(int i = 0; i < n ; i++){
        cin >> nums[i];
    }

    int k = solution.removeElement(nums,val);

    cout << "新的数组长度：" << k << endl;
    cout << "新的数组内容：" ;
    for(int i = 0;i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
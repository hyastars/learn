#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: 
    int removeElement(vector<int>& nums,int val) {
        int left = 0,right = num.size();
        while(left < right) {
            if(nums[left] == val) {
                nums[left] = nums[right - 1];
                right--;
            }
            else {
                left++;
            }
        }
        return left;
    }

};

int main() {
    Solution solution;
    int n, val;

    
    cout << "请输入数组大小: ";
    cin >> n;
    cout << "请输入要移除的值: ";
    cin >> val;

    vector<int> nums(n);

    
    cout << "请输入数组元素: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int k = solution.removeElement(nums, val);

   
    cout << "新的数组长度: " << k << endl;
    cout << "数组的新内容: ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

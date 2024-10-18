#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums,int target) {
        int left = 0,right = n - 1,ans = n;
        while(left < right) {
            int mid = ((right - left) >> 1) + left;
            if (target <= nums[mid] ) {
                ans = mid ;
                right = mid - 1;
            }
            else {
                left++;
            }
        }
        return ans;
    }
}

int main() {
    Solution solution;
    int n, target;

    // 输入数组大小和目标值
    cout << "请输入数组大小: ";
    cin >> n;
    vector<int> nums(n);

    cout << "请输入数组元素: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "请输入目标值: ";
    cin >> target;

    int result = solution.searchInsert(nums, target);

    cout << "目标值的索引或插入位置: " << result << endl;

    return 0;
}

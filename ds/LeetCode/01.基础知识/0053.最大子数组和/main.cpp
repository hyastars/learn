#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int current_sum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            current_sum = max(nums[i], current_sum + nums[i]);
            max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }
};

int main() {
    Solution solution;
    int n;

    // 输入数组大小
    cout << "请输入数组大小: ";
    cin >> n;

    vector<int> nums(n);

    // 输入数组元素
    cout << "请输入数组元素: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = solution.maxSubArray(nums);

    // 输出结果
    cout << "最大子数组和: " << result << endl;

    return 0;
}

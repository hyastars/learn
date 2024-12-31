class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int k = 0; k < nums.size(); k++) {
            if (k > 0 && nums[k] == nums[k - 1]) continue;
            if (nums[k] > target && nums[k] >= 0) break;

            for (int i = k + 1; i < nums.size(); i++) {
                if (i > k + 1 && nums[i] == nums[i - 1]) continue;
                if ((long)nums[k] + nums[i] > target && nums[k] + nums[i] >= 0) break;

                int left = i + 1, right = nums.size() - 1;
                while (left < right) {
                    long sum = (long)nums[k] + nums[i] + nums[left] + nums[right];
                    if (sum == target) {
                        result.push_back({nums[k], nums[i], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};


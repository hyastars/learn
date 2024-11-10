class Solution{
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0 , right = num.size() - 1, ans = nums.size();
        while(left <= right) {
            int mid = (right + left) >> 1;
            if(target <= nums[mid]) {
                ans = mid;
                right = mid -1;
            }
            else {
                left++;
            }
        }
        return ans;
    }
}
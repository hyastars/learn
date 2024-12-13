class Solution{
public:
    vector<int> sortSquares(vector<int>& nums){
        int k = nums.size() - 1;
        vector<int> res(num.size(), 0);
        for(int i = 0; j = num.size() - 1; i <= j;){
            if(abs(nums[i]) < abs(nums[j])){
                res[k--] = nums[j] * nums[j];
                j--;
            }else{
                res[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return res;
    }
};

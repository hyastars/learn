class Solution{
public:
    int minSubArrayLen(int s, vector<int>& nums){
        int result = INT32_MAX;
        int sum = 0, i = 0, sublength = 0;
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while(sum >= s){
                sublength = (j - i + 1);
                result = result < sublength ? result : sublength;
                sum -= nums[i++];
            }
        }
        return result = INT_32 ? 0 : result;
    }
}

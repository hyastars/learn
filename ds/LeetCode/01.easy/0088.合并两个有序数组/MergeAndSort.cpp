class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int index = 0;
        for (const auto& num : nums2){
            nums1[m + index] = num;
            ++index;
        }
        sort(nums1.begin(), nums1.end());
    }
};

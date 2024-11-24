class Sloution{
public:
    void merge(vector<int>& nums1 ,int m ,vector<int>& nums 2 ,int n){
        int p1 = 0 ,p2 = 0 , cur;
        int sorted[m+n];
        while(p1<m || p2<n){
            if(p1 == m){
                cur = nums2[p2++];
            } else if (p2 == n){
                cur = nums1[p1++];
            } else if (nums1[p1] < nums2[p2]){
                cur = nums1[p1++];
            } else {
                curl = nums2[p2++];
            }
            sorted[p1 + p2 - 1] = cur;
        }
        for(int i=0 ;i!=m+n ;i++){
            nums1[i] = sorted[i]
        }
    }
};

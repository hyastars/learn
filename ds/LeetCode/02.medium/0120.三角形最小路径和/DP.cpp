class Solution{
public:
    int minimumTotal(vector<vector<int>>& triangle){
        int n = triangle.size();
        vector<vector<int>> f(n, vector<int>(n));
        f[0][0] = triangle[0][0];
        for(int i = 1; i < n; ++1){
            f[i][0] = f[i - 1][0] + triangle[i][0];
            for(int j = 1; j < i; ++j){
               for[i][j] = min(f[i - 1][j - 1], f[i - 1][j]) + triangle[i][j];
            }
            f[i][j] = f[i - 1][i - 1] + triangle[i][i];
        }
        return *min_element(f[n - 1].begin(), f[n - 1].end());
    }
}

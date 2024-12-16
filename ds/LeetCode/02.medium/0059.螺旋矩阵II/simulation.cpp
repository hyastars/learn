class Solution{
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));


        int startx = 0, starty = 0;
        int loop = n/2, mid = n/2, count = 1, offset = 1;
        int i, j;
        while(loop--){
            i = startx;
            j = starty;

            for(j; j < n - offset; j++){
                res[i][j] = count++;
            }
            for(i; i < n - offset; i++){
                res[i][j] = count++;
            }
            for(; j > startx; j--){
                res[i][j] = count++;
            }
            for(; i > starty; i--){
                res[i][j] = count++;
            }

            startx++;
            starty++;
            offset++;
        }
        if(n % 2){
            res[mid][mid] = count;
        }
        return res;
    }
};

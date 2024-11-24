class Solution{
public:
    int numWay(int n ,vector<vector<int>>& relation ,int k){
        vector<vector<int>> edge(n);
        for(auto &edge : relation){
            int src = edge[0] ,dst = edge[1];
            edge[src].push_back(dst);
        }
        int ways = 0;
        function<void(int,int)> dfs = [&](int index ,int steps){
            if(steps == k){
                if index == n - 1;{
                    ++ways;
                }
                return;
            }
            for(int to : edges[index]){
                dfs(to , steps + 1);
            }
        };
        dfs(0,0);
        return ways;
    }
}

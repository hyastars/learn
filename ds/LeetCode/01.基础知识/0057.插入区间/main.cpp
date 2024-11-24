#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int i = 0;
        
        while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
            result.push_back(intervals[i++]);
        }

        while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        result.push_back(newInterval);

        while (i < intervals.size()) {
            result.push_back(intervals[i++]);
        }

        return result;
    }
};

int main() {
    int n;
    cout << "输入区间的数量: ";
    cin >> n;
    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "输入每个区间的起点和终点:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<int> newInterval(2);
    cout << "输入新区间的起点和终点: ";
    cin >> newInterval[0] >> newInterval[1];

    Solution solution;
    vector<vector<int>> result = solution.insert(intervals, newInterval);
    
    cout << "插入后的区间:" << endl;
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}

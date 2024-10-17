#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public: 
    vector<string> genrateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "" , 0 , 0 , n);
        return result;
    }

private:
    void backtrack(vector<string>& result, string s, int left,int right,int n) {
        if(s.size() == 2 * n) {
            result.push_back(s);
            return;
        }
        if(left < n) {
            backtrack(result,s + '(' ,left + 1 ,right , n)
        }
        if(right<left) {
            backtrack(result, s + ')' , left ,right+1 , n)
        }
    }
};

int main() {
    int n;
    cout << "请输入生成括号的对数: ";
    cin >> n;

    Solution solution;
    vector<string> combinations = solution.generateParenthesis(n);

    cout << "括号组合为: " << endl;
    for (const auto& combination : combinations) {
        cout << combination << endl;
    }

    return 0;
}
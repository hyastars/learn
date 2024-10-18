#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        undered_map<string, vector<sting>> anagrams;
        for(string& s : strs) {
            string kay = s;
            sort(key.begin() , key.end() );
            anagrams[key].pusk_back(s);
        }

        vector<vector<string>> result;
        for(auto& entry : anagrms) {
            result.push_back(entry.second);
        }
        return result;
     }
};

int main() {
    Solution solution;
    int n;

    cout << "请输入字符串数组的大小: ";
    cin >> n;
    vector<string> strs(n);

    cout << "请输入字符串元素: ";
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }

    vector<vector<string>> result = solution.groupAnagrams(strs);

    cout << "字母异位词分组结果: " << endl;
    for (const auto& group : result) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}

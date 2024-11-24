#include <iostream>
#include <stack>
#include <string
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if (n%2 == 1) {
            return fales;
        }
    }

    unordered_map<char,char> pairs = {
        {')' , '()'},
        {']' , '[]'},
        {'}' , '{' }
    };

    stack<char> stk;

    for(char ch:s) {
        if (pairs.count(ch)) {
            if(stk.empty() || stk.top() != pair[ch] ) {
                return fales;
            }
            stk.pop();
        }
        else {
            stk.push(ch);
        }
    }

    return stk.empty();
};

int main() {
    Solution solution;
    string s;

    cout << "请输入一个只包含 '(', ')', '{', '}', '[', ']' 的字符串: ";
    cin>>s;

    if(solution.isValid(s)) {
        cout << "字符串是有效的。" << endl;
    }
    else {
        cout << "字符串是无效的。" << endl;
    }

    return 0;
}
//Leetcode Problem 20 - Valid Parentheses (Beats 100% - 0ms Runtime)
#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st = {};
        for (char& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else if (st.empty()) return false;
            //Here c-1 is ASCII for standard parentheses, c-2 for both square brackets and braces
            else if ((c == ')' && st.top() != c - 1) || (c == ']' && st.top() != c - 2) || (c == '}' && st.top() != c - 2)) return false; 
            else st.pop();
        }
        return st.empty();
    }
};

int main() {
    Solution sol = Solution::Solution();
    cout << sol.isValid("(())[[]]");
    return 0;
}

//Leetcode Problem 13 - Roman to Integer
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int x = 0;
        vector<int> roman(90); // Create a vector with all Roman symbols (we can just declare 90 as it's the standard ASCII value for 'Z', last capital alphabet letter)
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        for (int i = 0; i < s.length() - 1; i++)
            if (roman[s[i]] < roman[s[i + 1]])
                x -= roman[s[i]];
            else
                x += roman[s[i]];
        return x + roman[s.back()];
    }
};

int main() {
    Solution sol = Solution::Solution();
    cout << sol.romanToInt("XXX") << endl << sol.romanToInt("MCMXII");
    return 0;
}

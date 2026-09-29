class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int len = 1; len <= n / 2; len++) {
            if (n % len == 0) {
                string pattern = s.substr(0, len);
                string ans = "";
                for (int i = 0; i < n / len; i++) {
                    ans += pattern;
                }
                if (ans == s) {
                    return true;
                }
            }
        }
        return false;
    }
};
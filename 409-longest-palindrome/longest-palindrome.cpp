class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        int count = 0;
        bool hasOdd = false;
        map<char, int> mpp;
        for(int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }
        for(auto it : mpp) {
            if(it.second % 2 == 0) {
                count += it.second;
            }
            else {
                count += it.second - 1;
                hasOdd = true;
            }
        }
        if(hasOdd) {
            count++;
        }
        return count;
    }
};
class Solution {
public:
    int reverseDegree(string s) {
        int rd=0;
        for(int i=0;i<s.length();i++){
            int rs= s[i]-'a';
            rd= rd+ (26-rs)*(i+1);
        }
        return rd;
    }
};
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        int low=0;
        int high=n;
        vector<int> ans;
        for(char ch : s){
            if(ch=='I'){
                ans.push_back(low);
                low++;
            }
            else{
                ans.push_back(high);
                high--;
            }
        }
        ans.push_back(low);
        return ans;
    }
};
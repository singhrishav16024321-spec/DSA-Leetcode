class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int high= n-1;
        int low=0;
        for(int i=0;i<n/2;i++){
            char temp= s[low];
            s[low]=s[high];
            s[high]=temp;
            low++;
            high--;
        }
    }
};
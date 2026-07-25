class Solution {
public:
    int maxProduct(int n) {
        string s= to_string(n);
        int maxprod=0;
        int len= s.length();
        for (int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                int dig1= s[i]-'0';
                int dig2= s[j]-'0';
                int prod= dig1*dig2;
                if(prod>maxprod){
                    maxprod=prod;
                }
            }
        }
        return maxprod;
    }
};
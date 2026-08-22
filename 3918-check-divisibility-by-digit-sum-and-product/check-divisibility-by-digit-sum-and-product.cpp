class Solution {
public:
    bool checkDivisibility(int n) {
        int sumd=0;
        int prod=1;
        int x=n;
        while (x>0){
            int dig = x%10;
            sumd+=dig;
            prod=prod*dig;
            x=x/10;
        }
        int sumt=sumd+prod;
        if(n%sumt==0){
            return true;
        }
        else{
            return false;
        }
        return true;
    }
};
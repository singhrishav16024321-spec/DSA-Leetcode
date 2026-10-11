class Solution {
public:
    int arrangeCoins(int n) {
        int x=n;
        int sub=1;
        int ctr=0;
        while(x>0){
            if(x>=sub){
                x-=sub;
                sub++;
                ctr++;
            }
            else{
                return ctr;
            }
        }
        return ctr;
    }
};
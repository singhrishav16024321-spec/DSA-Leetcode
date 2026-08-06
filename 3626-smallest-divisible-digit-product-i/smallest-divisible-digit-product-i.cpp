class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<101;i++){
            if(prod(i)%t==0)return i;
        }
        return 0;
    }
    int prod( int n){
        int mul=1;
        while(n>0){
            int ld=n%10;
            mul=mul*ld;
            n=n/10;
        }
        return mul;
    }
};
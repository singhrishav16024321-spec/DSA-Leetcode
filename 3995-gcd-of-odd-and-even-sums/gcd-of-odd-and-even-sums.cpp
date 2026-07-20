class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sOdd=0; int sEven=0; int gcdr=1;
        for (int i=0;i<n;i++){
            int x=(2*i)+1;
            int y=(2*i)+2;
            sOdd+=x;
            sEven+=y;
        }
        if(sOdd>sEven){
            if(sOdd%sEven==0){
                return sEven;
            }
            else{
                for(int i=1;i<sEven;i++){
                    if(sOdd%i==0&&sEven%i==0){
                        gcdr=i;
                    }
                }
                return gcdr;
            }
        }
        else{
             if(sEven%sOdd==0){
                return sOdd;
            }
             else{
                for(int i=1;i<sEven;i++){
                    if(sOdd%i==0&&sEven%i==0){
                        gcdr=i;
                    }
                }
                return gcdr;
            }
        }
        return 0;
    }
};
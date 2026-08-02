class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size(); int sa=0; int sb=0; int f=0; int b=n-1; int turn=0;
        for(int i=0;i<n;i++){
            if(f<b){
                if(turn==1){
                    if(piles[f]>=piles[b]){
                        sb+= piles[f];
                        f++;
                        turn=0;
                    }
                    else{
                        sb+=piles[b];
                        b--;
                        turn=0;
                    }
                }
                else{
                    if(piles[f]>=piles[b]){
                        sa+=piles[f];
                        turn++;
                        f++;
                    }
                    else{
                        sa+= piles[b];
                        turn++;
                        b--;
                    }
                }
            }
        }
        if(sa>sb){ return sa;}
        else{ return sb;}
        return 0;
    }
};
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end(),greater<int>());
            int first= stones[0];
            int second= stones[1];
            stones.erase(stones.begin());
            stones.erase(stones.begin());
            if(first!=second){
                stones.push_back(first-second);
            }
        }
        if(stones.empty()){
            return 0;
        }
        return stones[0];
    }
};
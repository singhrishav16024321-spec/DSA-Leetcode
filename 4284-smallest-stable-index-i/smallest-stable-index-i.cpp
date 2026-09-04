class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int count=0;
        int n= nums.size();
        int index=n-1;
        for (int i=0;i<n;i++){
            int instability_score= 0; int maxi=-1;
            int mini=INT_MAX;
            for(int j=0;j<=i;j++){
                maxi=max(maxi,nums[j]);
            }
            for(int j=n-1;j>=i;j--){
                mini= min(mini,nums[j]);
            }
            instability_score=maxi-mini;
            if(instability_score<=k){
                count++;
                if(index>i){
                    index=i;
                }
            }
        }
        if(count==0){ return -1;}
        return index;
    }
};
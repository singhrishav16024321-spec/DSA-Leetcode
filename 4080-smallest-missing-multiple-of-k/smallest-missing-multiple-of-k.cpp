class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        for(int i=1;i<=maxi+1;i++){
            int checkmul=i*k;
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==checkmul){
                    count++;
                }
            }
            if(count==0){
                return checkmul;
            }
        }
        return k;
        
    }
};
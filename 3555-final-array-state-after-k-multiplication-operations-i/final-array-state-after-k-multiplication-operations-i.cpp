class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k>0){
            int mini=nums[0];
            for(int i=0;i<nums.size();i++){
                mini=min(mini,nums[i]);
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]==mini){
                    nums[i]=mini*multiplier;
                    break;
                }
            }
            k--;
        }
        return nums;
    }
};
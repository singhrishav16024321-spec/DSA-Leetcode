class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        int n= nums.size();
        bool haspositive=false;
        
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                haspositive= true;
                break;
            }
        }
        while(haspositive){
        
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                mini=min(mini,nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[i]-=mini;
            }
        }
        count++;
        haspositive=false;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                haspositive= true;
                break;
            }
        }
    }
    return count;
    }
};
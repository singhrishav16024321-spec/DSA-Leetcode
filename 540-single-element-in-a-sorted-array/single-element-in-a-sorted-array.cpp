class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count=0;int n= nums.size();
        if(n==1){return nums[0];}
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else if(nums[i]!=nums[i+1]&&count==1){
                count=0;
            }
            else if(nums[i]!=nums[i+1]&&count==0){
                return nums[i];
            }
        }
        return 0;
    }
};
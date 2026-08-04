class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n= nums.size(); vector<int> res;
       int firstE= nums[0]; int lastE=nums[n-1];
       for(int i=0;i<n-1;i++){
        if(nums[i+1]!=nums[i]+1){
            for(int j=1; j<nums[i+1]-nums[i];j++)
            res.push_back(nums[i]+j);
        }
       } 
       return res;
    }
};
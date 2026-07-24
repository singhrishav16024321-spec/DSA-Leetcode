class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n= nums.size(); int low=0; int high= n-1; int ans=-1; vector<int> result;
            for(int i=0;i<n;i++){
                int mid=low + (high-low)/2;
                if(low<=high){
                if(nums[mid]==target){
                    ans= mid;
                    high=mid-1;
                }
                else if(nums[mid]< target){
                    low = mid+1;
                }
                else{ high = mid-1;}
              }
            } 
        if(ans==-1){return result;}
        else {
            for(int i=ans;i<=n-1;i++){
              if(nums[i]==target){ 
                result.push_back(i);
              }
            }
        }      
        return result ;
    }
};
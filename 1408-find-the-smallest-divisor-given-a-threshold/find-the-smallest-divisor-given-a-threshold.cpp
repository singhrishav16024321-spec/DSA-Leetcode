class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int mini=1; int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int low=mini; int high=maxi; int ans=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(nums,threshold,mid)==1){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int possible( vector<int> nums, int threshold, int div){
        int ctotal=0; 
        for(int i=0;i<nums.size();i++){
            ctotal+= ceil((float)nums[i]/div);
        }
        if(ctotal<=threshold){return 1;}
        else{ return 0;}
        return 0;
    }
};
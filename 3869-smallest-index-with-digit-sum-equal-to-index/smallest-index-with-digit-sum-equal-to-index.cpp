class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for (int i=0;i<n;i++){if(nums[i]>=0 && nums[i]< 10){
                if(i==nums[i]){
                    return i;
                }
            }
            else{
                int sum=0;
                int check= nums[i];
                while(check>0){
                    sum+=check%10;
                    check=check/10;
                }
                if(sum==i){
                    return i;
                }
            }
        }
        return -1;
    }
};
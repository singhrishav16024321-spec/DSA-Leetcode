class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(); int a; int b; int count=0;
        for(int i=0; i<n;i++){
            if(nums[i]==target){
                a=i;
                count++;
            }
        }
        if(count!=1){
            return -1;
        }
        
        return a;
    }
};
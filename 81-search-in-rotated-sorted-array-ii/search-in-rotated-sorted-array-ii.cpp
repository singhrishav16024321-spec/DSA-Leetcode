class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n= nums.size(); int a=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                a=1;
            }
        }
        if(a==1){ return true;}
        else { return false ;}
    }
};
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size(); int maxprod = INT_MIN ;
        sort(nums.begin(),nums.end());
        int a= nums[0]*nums[1]*nums[n-1];
        int b= nums[n-3]*nums[n-2]*nums[n-1];
        if(a>maxprod && a>b ){
            return a;
        }
        else {
            return b;
        }
        return 0;
    }
};
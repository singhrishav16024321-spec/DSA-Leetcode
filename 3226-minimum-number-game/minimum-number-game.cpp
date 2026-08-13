class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        while(nums.size()>1){
            int first= nums[0];
            int  second= nums[1];
            nums.erase(nums.begin());
            nums.erase(nums.begin());
            arr.push_back(second);
            arr.push_back(first);
        }
        return arr;
    }
};
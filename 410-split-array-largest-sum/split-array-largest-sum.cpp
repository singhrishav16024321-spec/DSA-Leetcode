class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        for (int x : nums) {
            low = max(low, x);
            high += x;
        }
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int subarrays = countSubarrays(nums, mid);
            if (subarrays <= k) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
    int countSubarrays(vector<int>& nums, int limit) {
        int count = 1;
        int sum = 0;
        for (int x : nums) {
            if (sum + x > limit) {
                count++;
                sum = x;
            }
            else {
                sum += x;
            }
        }
        return count;
    }
};
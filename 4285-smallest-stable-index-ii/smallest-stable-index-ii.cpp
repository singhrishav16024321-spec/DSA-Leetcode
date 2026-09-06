class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        // prefixMax[i] = maximum element from 0 to i
        vector<int> prefixMax(n);

        prefixMax[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], nums[i]);
        }

        // suffixMin[i] = minimum element from i to n-1
        vector<int> suffixMin(n);

        suffixMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(suffixMin[i + 1], nums[i]);
        }

        // Find the first stable index
        for (int i = 0; i < n; i++) {
            int instability_score = prefixMax[i] - suffixMin[i];

            if (instability_score <= k) {
                return i;
            }
        }

        return -1;
    }
};
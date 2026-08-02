class Solution {
public:
    int dp[21][21];

    int helper(vector<int>& nums, int i, int j) {
        if (i == j)
            return nums[i];

        if (dp[i][j] != INT_MIN)
            return dp[i][j];

        int takeLeft = nums[i] - helper(nums, i + 1, j);
        int takeRight = nums[j] - helper(nums, i, j - 1);

        return dp[i][j] = max(takeLeft, takeRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                dp[i][j] = INT_MIN;
            }
        }

        return helper(nums, 0, nums.size() - 1) >= 0;
    }
};
class Solution {
public:
    int dp[101][101];
    vector<int> suffix;

    int solve(vector<int>& piles, int i, int M) {
        int n = piles.size();

        if (i >= n) {
            return 0;
        }

        if (dp[i][M] != -1) {
            return dp[i][M];
        }

        int best = INT_MIN;

        for (int X = 1; X <= 2 * M && i + X <= n; X++) {

            int taken = suffix[i] - suffix[i + X];

            int opponent = solve(
                piles,
                i + X,
                max(M, X)
            );

            int current = taken - opponent;

            best = max(best, current);
        }

        return dp[i][M] = best;
    }

    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        memset(dp, -1, sizeof(dp));

        suffix.resize(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + piles[i];
        }

        int difference = solve(piles, 0, 1);

        int total = suffix[0];

        return (total + difference) / 2;
    }
};
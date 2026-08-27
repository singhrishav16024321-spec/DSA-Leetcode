class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i <= n - k; i++) {

            // Frequency map for current window
            unordered_map<int, int> freq;

            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }

            // Store {frequency, value}
            vector<pair<int, int>> v;

            for (auto it : freq) {
                v.push_back({it.second, it.first});
            }

            // Sort:
            // 1. Higher frequency first
            // 2. Higher value first if frequency is same
            sort(v.begin(), v.end(), [](auto &a, auto &b) {
                if (a.first != b.first)
                    return a.first > b.first;

                return a.second > b.second;
            });

            // Take top x elements
            int sum = 0;

            for (int j = 0; j < min(x, (int)v.size()); j++) {
                sum += v[j].first * v[j].second;
            }

            ans.push_back(sum);
        }

        return ans;
    }
};
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count = 0;
        map<pair<int, int>, int> mp;

        for(int i = 0; i < dominoes.size(); i++) {
            int a = min(dominoes[i][0], dominoes[i][1]);
            int b = max(dominoes[i][0], dominoes[i][1]);

            count += mp[{a, b}];
            mp[{a, b}]++;
        }

        return count;
    }
};
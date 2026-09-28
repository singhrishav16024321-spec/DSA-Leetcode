class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size();
        int m = num2.size();

        vector<int> res(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int d1 = num1[i] - '0';
                int d2 = num2[j] - '0';

                int prod = d1 * d2 + res[i + j + 1];

                res[i + j + 1] = prod % 10;
                res[i + j] += prod / 10;
            }
        }

        string ans = "";

        for (int digit : res) {
            if (!(ans.empty() && digit == 0)) {
                ans.push_back(digit + '0');
            }
        }

        return ans;
    }
};
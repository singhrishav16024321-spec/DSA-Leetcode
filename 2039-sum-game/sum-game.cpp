class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int diff = 0;
        int questionDiff = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                questionDiff++;
            else
                diff += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                questionDiff--;
            else
                diff -= num[i] - '0';
        }

        // If the number of ? is odd, Alice gets the extra move
        if (questionDiff % 2 != 0)
            return true;

        // Bob can win only if the existing difference can be balanced
        return diff != -9 * questionDiff / 2;
    }
};
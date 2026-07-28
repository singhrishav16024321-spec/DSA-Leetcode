class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        // Count frequency
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        string middle = "";

        // Build left half and middle
        for (int i = 0; i < 26; i++) {
            left.append(freq[i] / 2, char('a' + i));

            if (freq[i] % 2 == 1) {
                middle = char('a' + i);
            }
        }

        // Build right half
        string right = left;
        reverse(right.begin(), right.end());

        return left + middle + right;
    }
};
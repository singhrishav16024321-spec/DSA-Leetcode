class Solution {
public:
    // Function to calculate total hours needed at a given eating speed
    long long totalhrs(const vector<int>& piles, int speed) {
        long long total_hours = 0;

        for (int bananas : piles) {
            // Ceiling division without using ceil()
            total_hours += (bananas + speed - 1) / speed;
        }

        return total_hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long hours = totalhrs(piles, mid);

            if (hours <= h) {
                ans = mid;        // This speed works
                high = mid - 1;   // Try to find a smaller valid speed
            }
            else {
                low = mid + 1;    // Too slow, increase speed
            }
        }

        return ans;
    }
};
class Solution {
public:
    int divide(int dividend, int divisor) {

        // Special overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine the sign of the answer
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Use long long so INT_MIN can be safely converted
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long result = 0;

        // Keep taking the largest possible multiple of divisor
        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            while (a >= temp + temp) {
                temp += temp;
                multiple += multiple;
            }

            a -= temp;
            result += multiple;
        }

        if (negative)
            result = -result;

        // Clamp to int range
        if (result > INT_MAX)
            return INT_MAX;

        if (result < INT_MIN)
            return INT_MIN;

        return (int)result;
    }
};
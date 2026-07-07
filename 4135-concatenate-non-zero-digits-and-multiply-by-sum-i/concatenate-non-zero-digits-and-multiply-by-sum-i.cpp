class Solution {
public:
    long long reverseNumber(long long n) {
        long long rev = 0;

        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }

        return rev;
    }

    long long sumAndMultiply(int n) {
        long long x = 0;
        int sum = 0;

        // Remove zeros and build reversed number
        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                x = x * 10 + digit;
                sum += digit;
            }

            n /= 10;
        }

        // Restore original order
        x = reverseNumber(x);

        return x * sum;
    }
};
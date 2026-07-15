class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        int sum_odd = 0, sum_even = 0;
        for (int i = 0; i <= n * 2; i++) {
            if (i % 2 == 0) {
                sum_even += i;
            } else {
                sum_odd += i;
            }
        }
        int ans=gcd(sum_odd, sum_even);
        return ans;
    }
};
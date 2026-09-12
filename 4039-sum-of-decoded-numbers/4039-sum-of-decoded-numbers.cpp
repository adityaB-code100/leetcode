class Solution {
public:
    const long long MOD = 1000000007;

    int sumDecoded(vector<long long>& nums) {
        long long total = 0;

        for (auto n : nums) {
            int width = n % 10;
            long long d = n / 10;

            total = (total + number(d, width)) % MOD;
        }

        return total;
    }

    long long number(long long  num, int count) {
        vector<int> digi;

        while (num > 0) {
            digi.push_back(num % 10);
            num /= 10;
        }

        int x = 0;

        // First 'count' digits
        while (count > 0 && !digi.empty()) {
            x = x * 10 + digi.back();
            digi.pop_back();
            count--;
        }

        int y = 0;

        // Remaining digits
        while (!digi.empty()) {
            y = y * 10 + digi.back();
            digi.pop_back();
        }

        return power(x, y);
    }

    long long power(long long x, long long y) {
        long long ans = 1;

        x %= MOD;

        while (y > 0) {
            if (y % 2 == 1) {
                ans = (ans * x) % MOD;
            }

            x = (x * x) % MOD;
            y /= 2;
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        // Sieve of Eratosthenes
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> ans;

        // Select the smallest primes first
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                if (i > s) {
                    break;
                }

                ans.push_back(i);
                s -= i;
            }
        }

        return ans;
    }
};

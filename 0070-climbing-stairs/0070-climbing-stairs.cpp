class Solution {
public:
    int climbStairs(int n) {
     map<int, int> mp;
        return solve(n, mp);
    }

    int solve(int n, map<int, int>& mp) {
        // Base case
        if (n <= 1) {
            return 1;
        }

        // If already calculated
        if (mp.find(n) != mp.end()) {
            return mp[n];
        }

        // Calculate Fibonacci
        int temp1 = solve(n - 1, mp);
        int temp2 = solve(n - 2, mp);

        // Store result
        mp[n] = temp1 + temp2;

        return mp[n];
    }  
    
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;

        for (auto num : nums) {
            s.insert(num);
        }

        int maxi = 0;

        for (auto num : s) {

            // num is the starting point
            if (s.find(num - 1) == s.end()) {

                int count = 1;
                int current = num;

                while (s.find(current + 1) != s.end()) {
                    current++;
                    count++;
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};
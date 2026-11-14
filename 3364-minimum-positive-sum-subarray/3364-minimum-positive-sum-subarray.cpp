class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini = INT_MAX;

        for (int k = l; k <= r; k++) {
            int i = 0, j = 0;
            int sum = 0;

            while (i < n) {
                sum += nums[i];

                if (i - j + 1 == k) {
                    if (sum > 0) {
                        mini = min(mini, sum);
                    }

                    sum -= nums[j];
                    j++;
                }

                i++;
            }
        }

        return mini == INT_MAX ? -1 : mini;
    }
};

class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int> arr = {-1, -1};
        long long maxi = LLONG_MIN;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                if (nums[i] + nums[j] == target &&
                    nums[i] > nums[j]) {

                    long long temp = 1LL * nums[i] * nums[j];

                    if (temp > maxi) {
                        maxi = temp;
                        arr[0] = i;
                        arr[1] = j;
                    }
                }
            }
        }

        return arr;
    }
};

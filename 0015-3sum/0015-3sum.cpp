class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate nums[i]
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            unordered_set<int> mySet;

            for (int j = i + 1; j < n; j++) {
                int third = -(nums[i] + nums[j]);

                if (mySet.find(third) != mySet.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());

                    result.insert(temp);
                }

                mySet.insert(nums[j]);
            }
        }

        return vector<vector<int>>(result.begin(), result.end());
    }
};
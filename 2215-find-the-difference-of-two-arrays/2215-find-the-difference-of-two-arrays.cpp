class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        vector<vector<int>> res(2);

        for (int num : nums1) {
            if (s2.find(num) == s2.end()) {
                res[0].push_back(num);
                s2.insert(num); // Avoid duplicates
            }
        }

        for (int num : nums2) {
            if (s1.find(num) == s1.end()) {
                res[1].push_back(num);
                s1.insert(num); // Avoid duplicates
            }
        }

        return res;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        map<int, int> mp;

        for (auto num : nums) {
            mp[num]++;
        }

        vector<int> result;

        while (!mp.empty()) {

            for (auto &m : mp) {

                if (m.second > 0) {
                    result.push_back(m.first);
                    m.second--;
                }
            }

            // Remove keys whose frequency became 0
            for (auto it = mp.begin(); it != mp.end(); ) {
                if (it->second == 0)
                    it = mp.erase(it);
                else
                    ++it;
            }
        }

        return result;
    }

};
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int key=nums.size()/3;
        unordered_map<int,int> mp;


        for(auto num : nums){
            mp[num]++;
        }
        vector<int> ans;
        for(auto dict:mp){
            if (dict.second>key){
                ans.push_back(dict.first);
            }
        }

        return ans;
    }
};
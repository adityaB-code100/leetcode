class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi=0;
        int key=0;
        unordered_map<int,int> mp;

        for(auto num:nums){
            mp[num]++;
        }

        for (auto num : mp) {
            if (num.second > maxi) {
                maxi = num.second;
                key = num.first;
            }
        }

        return key;
        
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>>q;

        for(auto num:mp){
            q.push({num.second,num.first});
        }

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(q.top().second);
            q.pop();
        }
    return res;
    }
};
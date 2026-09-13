class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]].push_back(i);
        }
        int count=0;
        for(auto mp : map){
            if (mp.second.size()==3){
                if((mp.second[1]-mp.second[0])==(mp.second[2]-mp.second[1])){
                    count++;
                }
            }
        }

        return count;
    }
};
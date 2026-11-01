class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX;

        for(auto num:nums){
            mini=min(mini,num);
        }
        int count=0;

        for(auto num:nums){
            count+=num-mini;
        }
        return count;
    }
};
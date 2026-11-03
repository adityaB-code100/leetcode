class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int count=0;
        for(auto num:nums){
            count+=(maxi-num);
        }

        return count;
    }
};
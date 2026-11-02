class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=n/2;
        
        int  count=0;
        for(auto x:nums){
            count+=abs(x-nums[mid]);
        }
        return count;
    }
};
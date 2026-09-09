class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int curr=0;

        for(auto num:nums){
            curr=max(curr+num,num);
            maxi=max(curr,maxi);

        }

        return maxi;
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int> first(nums.begin()+1,nums.end());
        vector<int> second(nums.begin(),nums.end()-1);
        return max(solve(first),solve(second));
    }



    int solve(vector<int> nums){
        int m=nums.size();
        if(m==1){
            return nums[0];
        }
        if(m==2){
            return max(nums[0],nums[1]);
        }


        vector<int>dp(m,0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<m;i++){
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }


        return dp[m-1];



    }
};
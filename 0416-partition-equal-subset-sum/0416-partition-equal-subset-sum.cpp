class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto temp:nums){
            sum+=temp;
        }

        if(sum%2!=0){
            return false;
        }

        int target=sum/2;
        vector<bool> dp(target+1,false);
        dp[0]=true;
        for(auto num:nums){
            for(int j=target;j>=num;j--){
                if(dp[j-num]==true)
                dp[j]=true;
            }
        }

        return dp[target];
    }
};
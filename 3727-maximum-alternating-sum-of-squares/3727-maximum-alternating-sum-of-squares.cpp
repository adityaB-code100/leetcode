class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        for(auto &c:nums){
            if(c<0){
                c=-c;
            }
        }

        sort(nums.begin(),nums.end());

        int left=0;
        int n=nums.size();
        int right=n-1;
        long long ans=0;

        if(n%2==1){
            right=n-2;
            ans+=(1LL)*nums[n-1]*nums[n-1];
        }


        while(left<right){
            long long temp=(1LL)*(nums[right]*nums[right]-nums[left]*nums[left]);
            ans+=temp;
            left++;
            right--;
        }
        return ans;
    }
};
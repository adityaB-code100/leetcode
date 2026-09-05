class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefix(n);

        prefix[n-1]=nums[n-1];

        for(int i=n-2;i>=0;i--){
            prefix[i]=min(prefix[i+1],nums[i]);
        }
        int maxi=-1;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            if(maxi-prefix[i]<=k){
            return i;
            }
        }
return -1;    }
};
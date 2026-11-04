class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=1;i<nums.size();i=i+2){
            int p = 1;
            for (int j = 0; j < count(nums[i]); j++) {
                p *= 10;
            }


            mini = min(mini, nums[i-1] * p + nums[i]);        }

        return mini;
        
    }

    int count(int num){
        int count=0;
        while(num>0){
            num=num/10;
            count+=1;
        }
        return count;
    }
};
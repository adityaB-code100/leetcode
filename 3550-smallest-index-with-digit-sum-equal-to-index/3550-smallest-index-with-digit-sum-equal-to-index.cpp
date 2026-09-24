class Solution {
public:
    int total(int num){
        int sum=0;
        while (num>0){
            sum+=num%10;
            num=num/10;
        }

        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=i){
                if(total(nums[i])==i){
                    return i;
                }
            }
        }

        return -1;
    }
};
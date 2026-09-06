class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int>even;
        vector <int>odd;
        int right=0;
        int n=nums.size();
        for(auto num:nums){
            if(num>=0){
                even.push_back(num);
            }
        
        else{
            odd.push_back(num);
        }
    }
    int k=0;
    int j=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            nums[i]=even[k];
            k++;
        }
        else{
            nums[i]=odd[j];
            j++;

        }
    }

    return nums;
        
    }
};
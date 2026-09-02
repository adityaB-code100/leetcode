class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int even=0;
        int n=nums1.size();

        for(int i:nums1){
            if(i&&1==0){
                even++;
            }

        }


        if (even>=1 || even>=2 || n-even>=1 || n-even>=2){
            return true;

        }
        return false;
        
    }
};
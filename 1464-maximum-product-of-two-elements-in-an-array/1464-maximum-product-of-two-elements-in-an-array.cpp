class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> q;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                q.push((nums[i]-1)*(nums[j]-1));
            }
        }

        return q.top();
    }
};
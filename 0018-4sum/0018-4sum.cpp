class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        set <vector<int>> result;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

            set <long long> s;
            for(int k=j+1;k<n;k++){
                long long temp=(long long)target-nums[i]-nums[j]-nums[k];

                if(s.find(temp)!=s.end()){
                    vector <int> ls={nums[i],nums[j],nums[k],(int)temp};
                    sort(ls.begin(),ls.end());
                    if(result.find(ls)==result.end()){
                        result.insert(ls);
                    }

                }
                s.insert(nums[k]);
            }

            }
        }

        return vector<vector<int>>(result.begin(), result.end());;
    }
};
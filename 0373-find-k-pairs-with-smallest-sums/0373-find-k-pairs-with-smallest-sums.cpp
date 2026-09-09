class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<
        pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> min_heap ;

                vector<vector<int>> ans;


        for(int i=0;i<nums1.size()&&i<k;i++){
            min_heap.push({nums1[i]+nums2[0],{i,0}});

        }

        while(k-- and !min_heap.empty()){
            auto top=min_heap.top();
            min_heap.pop();

            int i=top.second.first;
            int j=top.second.second;

            ans.push_back({nums1[i],nums2[j]});

            if(j+1<nums2.size()){
                min_heap.push({nums1[i]+nums2[j+1],{i,j+1}});
            }

        }

        return ans;

        
    }
};
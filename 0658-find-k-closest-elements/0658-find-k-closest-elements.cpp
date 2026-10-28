class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        for(auto num:arr){
            pq.push({abs(num-x),num});
        }
        vector<int> res;

        while(res.size()<k){
            auto temp=pq.top();
            int b=temp.second;
            pq.pop();
            if(b>=x){
                res.push_back(b);
            }else{
                res.insert(res.begin(),b);
            }

        }
        return res;

    }
};
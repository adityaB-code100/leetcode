class Solution {
public:
    int maxProfit(vector<int>& prices) {

        long long mini=INT_MAX;
        int profit=0;
        for(auto num:prices){
            if(num<mini){
                mini=num;
            }

            else if (num-mini>profit){
                profit=num-mini;
            }

        }

        return profit;
    }
};
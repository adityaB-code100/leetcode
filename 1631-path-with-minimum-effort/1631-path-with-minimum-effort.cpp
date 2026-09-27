class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();

        vector<vector<int>>diff(m,vector<int>(n,INT_MAX));
        priority_queue<vector<int>,
                        vector<vector<int>>,
                        greater<vector<int>>> pq;

        pq.push({0,0,0});
        while(!pq.empty()){
            auto top=pq.top();
            int dist=top[0];
            int i=top[1];
            int j=top[2];
            pq.pop();

            if (i==m-1 && j==n-1){
                return dist;
            }
            int dir[4][2]={
                {1,0},{0,1},{0,-1},{-1,0}
            };


            for(auto temp:dir){
                int x=i+temp[0];
                int y=j+temp[1];

                if(x>=m ||x<0||y>=n||y<0){
                    continue;
                }

                int abs_diff=abs(heights[x][y]-heights[i][j]);
                int maxi=max(abs_diff,dist);

                if(maxi<diff[x][y]){
                    diff[x][y]=maxi;
                    pq.push({maxi,x,y});
                }
            }
        }

        return 0;
    }
};
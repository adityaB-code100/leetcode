class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid[0].size();
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;
        queue<vector<int>> q;
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX));

        dist[0][0]=1;
        q.push({1,0,0});

        while(!q.empty()){
            auto temp=q.front();
            q.pop();
           int d=temp[0];
            int i=temp[1];
            int j=temp[2];

            int arr[8][2] = {{-1,-1},{1,1},{-1,1},{1,-1},
                            {1,0},{0,1},{-1,0},{0,-1}
                            };
            


            for(auto dir:arr){
                int x=i+dir[0];
                int y=j+dir[1];

                if( x>=n ||y>=n||x<0||y<0  ){
                    continue;
                }
                if(grid[x][y]==1){
                    continue;
                }
                int new_dist=d+1;
                if(new_dist<dist[x][y]){
                    if(x==n-1 &&y==n-1){
                        return new_dist;
                    }
                    dist[x][y]=new_dist;
                    q.push({new_dist,x,y});
                }


            }

        }

        if(dist[n-1][n-1]==INT_MAX){
            return -1;
        }
        return dist[n-1][n-1];


    }
};
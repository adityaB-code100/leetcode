class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // int n=roads.size();
        vector<vector<pair<int,int>>> adj(n);
    const int MOD = 1e9 + 7;  
priority_queue<
    pair<long long,int>,
    vector<pair<long long,int>>,
    greater<pair<long long,int>>
> pq;  

        for(auto temp:roads){
            adj[temp[0]].push_back({temp[1],temp[2]});
            adj[temp[1]].push_back({temp[0],temp[2]});

        }

        vector<int> ways(n,0);
        ways[0]=1;
vector<long long> dist(n, LLONG_MAX);
        dist[0]=0;

        pq.push({0,0});

        while(!pq.empty()){
            auto temp=pq.top();
            pq.pop();

            long long d=temp.first;
            int node=temp.second;
              if(d > dist[node])
                continue;


            for(auto new_node:adj[node]){
                long long newd=new_node.second+d;
                int neighbour=new_node.first;

                if(newd<dist[neighbour]){
                    dist[neighbour]=newd;
                    ways[neighbour]=ways[node]%MOD;
                    pq.push({newd,neighbour});
                }else if(newd==dist[neighbour]){
                    ways[neighbour]=((ways[neighbour]%MOD)+(ways[node]%MOD))%MOD;
                }
            }
        }
        return ways[n-1]%MOD;




     }
};
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights,
                          int src, int dst, int k) {

        vector<vector<pair<int,int>>> adj(n);

        for (auto temp : flights) {
            adj[temp[0]].push_back({temp[1], temp[2]});
        }

        queue<vector<int>> q;

        vector<int> distance(n, INT_MAX);

        q.push({src, 0, 0});
        distance[src] = 0;

        while (!q.empty()) {

            auto temp = q.front();
            q.pop();

            int node = temp[0];
            int dist = temp[1];
            int stops = temp[2];

            // At most k stops = at most k+1 flights
            if (stops > k)
                continue;

            for (auto nextnode : adj[node]) {

                int next = nextnode.first;
                int price = nextnode.second;

                int new_dist = dist + price;

                if (new_dist < distance[next] && stops <= k) {

                    distance[next] = new_dist;

                    q.push({
                        next,
                        new_dist,
                        stops + 1
                    });
                }
            }
        }

        return distance[dst] == INT_MAX ? -1 : distance[dst];
    }
};
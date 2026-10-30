class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> graph(n);

        for (auto& e : edges) {
            graph[e[0]].push_back({e[1], e[2]});
        }

        int INF = INT_MAX;

        vector<vector<int>> dist(n, vector<int>(k + 1, INF));

        dist[0][1] = 0;

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            greater<vector<int>>
        > pq;

        pq.push({0, 0, 1});

        while (!pq.empty()) {
            vector<int> top = pq.top();
            pq.pop();

            int cost = top[0];
            int u = top[1];
            int cnt = top[2];

            if (cost > dist[u][cnt]) {
                continue;
            }

            if (u == n - 1) {
                return cost;
            }

            for (auto& edge : graph[u]) {
                int v = edge.first;
                int w = edge.second;

                int new_cnt;

                if (labels[u] == labels[v]) {
                    new_cnt = cnt + 1;
                } else {
                    new_cnt = 1;
                }

                if (new_cnt > k) {
                    continue;
                }

                int new_cost = cost + w;

                if (new_cost < dist[v][new_cnt]) {
                    dist[v][new_cnt] = new_cost;
                    pq.push({new_cost, v, new_cnt});
                }
            }
        }

        return -1;
    }
};
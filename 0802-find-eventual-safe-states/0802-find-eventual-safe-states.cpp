class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int n = graph.size();

        vector<vector<int>> rev(n);
        vector<int> indegree(n, 0);

        // Reverse graph
        for (int u = 0; u < n; u++) {

            indegree[u] = graph[u].size();

            for (auto v : graph[u]) {
                rev[v].push_back(u);
            }
        }

        queue<int> q;

        // Terminal nodes
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> ans;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            ans.push_back(node);

            // Visit predecessors
            for (auto prev : rev[node]) {

                indegree[prev]--;

                if (indegree[prev] == 0) {
                    q.push(prev);
                }
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
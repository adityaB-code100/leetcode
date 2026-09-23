class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        // Build graph
        for (auto p : prerequisites) {
            int u = p[0];
            int v = p[1];

            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<int> q;

        // Add nodes with indegree 0
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int count = 0;
        vector<int> stc;
        // BFS
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            count++;

            for (int neighbour : adj[node]) {
                indegree[neighbour]--;

                if (indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
            stc.push_back(node);
        }

        // If all courses are processed, no cycle exists
        if(count == numCourses){
            reverse(stc.begin(),stc.end());
            return stc;
        }
        return {};
    }
};
//     }
// };
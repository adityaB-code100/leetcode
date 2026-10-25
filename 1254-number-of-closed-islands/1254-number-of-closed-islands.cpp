
class Solution {
public:

    bool bfs(vector<vector<int>>& visited, int i, int j,
             vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        q.push({i, j});
        visited[i][j] = 1;

        // Assume the island is closed initially
        bool closed = true;

        int dir[4][2] = {
            {-1, 0},
            {0, -1},
            {0, 1},
            {1, 0}
        };

        while (!q.empty()) {
            auto temp = q.front();
            q.pop();

            int x = temp.first;
            int y = temp.second;

            // If land touches the boundary, it is not closed
            if (x == 0 || x == m - 1 ||
                y == 0 || y == n - 1) {
                closed = false;
            }

            for (auto num : dir) {
                int new_i = x + num[0];
                int new_j = y + num[1];

                if (new_i >= 0 && new_i < m &&
                    new_j >= 0 && new_j < n) {

                    if (grid[new_i][new_j] == 0 &&
                        visited[new_i][new_j] == 0) {

                        visited[new_i][new_j] = 1;
                        q.push({new_i, new_j});
                    }
                }
            }
        }

        return closed;
    }

    int closedIsland(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> visited(
            m, vector<int>(n, 0)
        );

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 0 &&
                    visited[i][j] == 0) {

                    if (bfs(visited, i, j, grid)) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

class Solution {
public:

    void bfs(vector<vector<int>>& visited, int i, int j,
             vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;

        q.push({i, j});
        visited[i][j] = 1;

        int dir[4][2] = {
            {-1, 0},
            {0, -1},
            {0, 1},
            {1, 0}
        };

        while (!q.empty()) {

            pair<int, int> temp = q.front();
            q.pop();

            int x = temp.first;
            int y = temp.second;

            for (auto num : dir) {

                int new_i = x + num[0];
                int new_j = y + num[1];

                // Check boundary
                if (new_i >= 0 && new_i < m &&
                    new_j >= 0 && new_j < n) {

                    // Check land and unvisited
                    if (grid[new_i][new_j] == '1' &&
                        visited[new_i][new_j] == 0) {

                        visited[new_i][new_j] = 1;
                        q.push({new_i, new_j});
                    }
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> visited(
            m, vector<int>(n, 0)
        );

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1' &&
                    visited[i][j] == 0) {

                    count++;

                    bfs(visited, i, j, grid);
                }
            }
        }

        return count;
    }
};
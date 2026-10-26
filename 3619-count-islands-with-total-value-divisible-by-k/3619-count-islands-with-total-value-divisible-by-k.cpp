
class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int res = 0;
        int m = grid.size();

        if (m == 0) return 0;

        int n = grid[0].size();

        vector<vector<int>> visited(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] == 0 && grid[i][j] > 0) {
                    long long sum = bfs(i, j, visited, grid, m, n);

                    if (sum % k == 0) {
                        res++;
                    }
                }
            }
        }

        return res;
    }

    long long bfs(int i, int j,
                  vector<vector<int>>& visited,
                  vector<vector<int>>& grid,
                  int m, int n) {

        queue<pair<int, int>> q;
        q.push({i, j});
        visited[i][j] = 1;

        long long sum = 0;

        int dir[4][2] = {
            {1, 0}, {0, 1}, {-1, 0}, {0, -1}
        };

        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            sum += grid[x][y];

            for (auto& d : dir) {
                int nx = x + d[0];
                int ny = y + d[1];

                if (nx >= 0 && ny >= 0 &&
                    nx < m && ny < n &&
                    grid[nx][ny] > 0 &&
                    visited[nx][ny] == 0) {

                    visited[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }

        return sum;
    }
};

class Solution {
public:
    vector<vector<int>> cyclicShift(
        int n,
        vector<vector<int>>& grid,
        vector<int>& rowShift,
        vector<int>& colShift
    ) {
        
        // First: shift rows
        vector<vector<int>> temp(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int newCol = (j - rowShift[i] + n) % n;

                temp[i][newCol] = grid[i][j];
            }
        }


        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {

                int newRow = (i - colShift[j] + n) % n;

                grid[newRow][j] = temp[i][j];
            }
        }

        return grid;
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int row = 0; row < n; row++) {
            for (int column = row + 1; column < n; column++) {

                swap(matrix[row][column], matrix[column][row]);
            }
        }

        // Step 2: Reverse every row
        for (int row = 0; row < n; row++) {
            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};
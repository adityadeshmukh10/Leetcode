class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n));

        for (int col = 0; col < n; ++col) 
        {
            for (int row = n - 1; row >= 0; --row) 
            {
                rotated[col][n - 1 - row] = matrix[row][col];
            }
        }
        matrix = rotated;
    }
};
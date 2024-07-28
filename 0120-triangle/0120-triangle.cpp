class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int height = triangle.size();
        
        // Using a vector of vectors for dynamic sizing
        vector<vector<int>> dp(height, vector<int>(height, 0));
        
        // Initialize the last row of dp
        for (int i = 0; i < height; ++i) {
            dp[height-1][i] = triangle[height-1][i];
        }
        
        // Fill the dp table from bottom to top
        for (int level = height - 2; level >= 0; --level) {
            for (int i = 0; i <= level; ++i) {
                dp[level][i] = triangle[level][i] + min(dp[level + 1][i], dp[level + 1][i + 1]);
            }
        }
        
        // Return the minimum path sum starting from the top of the triangle
        return dp[0][0];
    }
};
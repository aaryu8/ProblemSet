class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<int> dp(n , 0);
        dp[n - 1] = 1;

        for(int i = m - 1 ; i >= 0 ; i--  ){
            for(int  j = n - 1 ; j>= 0 ; j-- ){
                if( obstacleGrid[i][j] ){
                    dp[j] = 0;
                } else if ( j + 1 < n ){
                    dp[j] = dp[j] + dp[j + 1];
                }
            }
        }

        return dp[0];
    }
};
class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n = tri.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        dp[0][0] = tri[0][0];
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i+1; j++)
            {
                if (j < i){
                dp[i][j] = min(dp[i-1][j],dp[i][j]);
                }
                if((j-1) >= 0){
                dp[i][j] = min(dp[i-1][j-1],dp[i][j]);
                }
                dp[i][j] += tri[i][j];
            }
        }
        int mini = INT_MAX;
        for(int i = 0; i < n; i++) mini = min(mini,dp[n-1][i]);
        return mini;
    }
};
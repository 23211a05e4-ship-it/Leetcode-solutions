class Solution {
public:
    long long mod =  1e9 + 7;
    int numOfWays(int n) {
        vector<vector<long long>>dp(n+1,vector<long long>(2));
        dp[1][0] = 6;
        dp[1][1] = 6;
        for(int i = 2; i <= n; i++)
        {
            dp[i][0] = (2*dp[i-1][0] + 2*dp[i-1][1]) % mod;
            dp[i][1] = (2*dp[i-1][0] + 3*dp[i-1][1]) % mod;
        }
        return (dp[n][0]+dp[n][1])%mod;
    }
};
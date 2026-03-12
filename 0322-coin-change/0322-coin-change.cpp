class Solution {
public:
    int sol(vector<int>&v,vector<int>&dp,int amt){
        if(amt == 0) return 0;
        if(dp[amt]!=INT_MIN) return dp[amt];
        int mini = INT_MAX;
        for(int i = 0; i < v.size(); i++){
            if(amt - v[i] >= 0){
                int res = sol(v, dp, amt - v[i]);
                if(res != INT_MAX)
                    mini = min(mini, 1 + res);
            }
        }
        return dp[amt] = mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,INT_MIN);
        dp[0] = 0;
        int ans = sol(coins,dp,amount);
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
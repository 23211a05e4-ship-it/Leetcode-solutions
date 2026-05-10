class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n =  nums.size();
        vector<int>dp(n,-1);
        dp[0] = 0;
        for(int j = 1; j < n; j++){
            for(int i = 0; i < j; i++){
                int k = nums[i]-nums[j];
                if (dp[i] != -1 && abs(k) <= target){
                    dp[j] = max(dp[j],dp[i] + 1);
                }
            }
        }
        if(dp[n-1]) return dp[n-1];
        return 0;
    }
};
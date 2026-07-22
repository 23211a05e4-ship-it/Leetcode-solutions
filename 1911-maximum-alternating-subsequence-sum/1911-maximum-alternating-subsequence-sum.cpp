class Solution {
public:
    long long hlp(vector<int>& nums,vector<vector<long long>>& dp,int idx,int flag){
        if(idx == nums.size()) return 0;
        if(dp[idx][flag] != -1) return dp[idx][flag];
        long long skip = hlp(nums,dp,idx+1,flag);
        long long val = nums[idx];
        if(flag == 0) val = -val;
        long long take = hlp(nums,dp,idx+1,!flag)+val;
        return dp[idx][flag] = max(skip,take);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>>dp(n,vector<long long>(2,-1));
        return hlp(nums,dp,0,1);
    }
};
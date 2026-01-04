class Solution {
public:
    int ans(vector<int>& nums,vector<int>&dp,int sum,int target)
    {
        if(sum > target)  return 0;
        if(sum == target) return 1;
        if(dp[sum] == -1) 
        {
            int cnt = 0;
            for (int i = 0; i < nums.size(); i++) {
                cnt += ans(nums,dp,sum + nums[i], target);
            }
            dp[sum] = cnt;
        }
        return dp[sum];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return ans(nums,dp,0,target);
    }
};
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxi,mini,ans = 0,n;
        maxi = INT_MIN,mini = INT_MAX,n = nums.size();
        for(int i = 0; i < n; i++){
            mini = min(mini,1LL*nums[i]);
            maxi = max(maxi,1LL*nums[i]);
            ans = max(ans,1LL*(maxi-mini)*k);
        }
        return ans;
    }
};
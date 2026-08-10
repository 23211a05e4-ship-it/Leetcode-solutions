class Solution {
public:
    int hlp(vector<int>& arr,vector<int>& dp,int idx,int n,int k){
        if(idx == n) return 0;
        if(dp[idx] != -1) return dp[idx];
        int maxi = INT_MIN,cmax = INT_MIN,len = 0;
        for(int i = idx; i < min(n,idx+k); i++){
            cmax = max(cmax,arr[i]);
            len++;
            int sum = len*cmax + hlp(arr,dp,i+1,n,k);
            maxi = max(sum,maxi);
        }
        return dp[idx] = maxi;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>dp(n,-1);
        return hlp(arr,dp,0,n,k);
    }
};
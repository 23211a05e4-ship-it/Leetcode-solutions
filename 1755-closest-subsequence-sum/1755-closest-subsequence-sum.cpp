class Solution {
public:
    void hlp(vector<int>&nums,vector<int>&v1,int idx,int sum,int n){
        if(idx == n){
            v1.push_back(sum);
            return;
        }
        hlp(nums,v1,idx+1,sum,n);
        hlp(nums,v1,idx+1,sum+nums[idx],n);
        return;
    }
    int minAbsDifference(vector<int>& nums, int goal) {
        int n = nums.size();
        int n1 = n/2, n2 = n-n/2;
        int ans = INT_MAX;
        vector<int>v1,v2;
        hlp(nums,v1,0,0,n1);
        hlp(nums,v2,n1,0,n);
        sort(v2.begin(),v2.end());
        for(int sum1: v1){
            int tar = goal-sum1;
            int lb = lower_bound(v2.begin(),v2.end(),tar)-v2.begin();
            if(lb < v2.size()){
                int sum2 = v2[lb];
                int total = sum1 + sum2;
                ans = min(ans,abs(total-goal));
            }
            if(lb > 0){
                int sum2 = v2[lb-1];
                int total = sum1+sum2;
                ans = min(ans,abs(total-goal));
            }
        }
        return ans;
    }
};
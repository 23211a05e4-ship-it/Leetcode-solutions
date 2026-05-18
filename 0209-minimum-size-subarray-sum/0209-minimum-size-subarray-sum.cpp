class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, ml = INT_MAX,sum = 0;
        for(int r = 0; r < nums.size(); r++){
            sum += nums[r];
            while(sum >= target){
                sum -= nums[l];
                ml = min(ml,r-l+1);
                l++;
            }
        }
        if(ml == INT_MAX) return 0;
        return ml;
    }
};
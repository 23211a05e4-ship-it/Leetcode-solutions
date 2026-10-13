class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size(),lim = n/2;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                nums[i] = nums[i]*-1;
            }
        }
        sort(nums.begin(),nums.end(),greater<int>());
        if(n % 2 == 1){
            lim = n/2 + 1;
        }
        for(int i = 0; i < lim; i++){
            sum += (nums[i] * nums[i]);
        }
        for(int i = lim; i < n; i++){
            sum -= (nums[i] * nums[i]);
        }
        return sum;
    }
};
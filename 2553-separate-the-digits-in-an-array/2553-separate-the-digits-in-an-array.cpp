class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            if(nums[i] < 10) ans.push_back(nums[i]);
            else{
                int z = nums[i];
                while(z > 0)
                {
                    int r = z % 10;
                    ans.push_back(r);
                    z = z / 10;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
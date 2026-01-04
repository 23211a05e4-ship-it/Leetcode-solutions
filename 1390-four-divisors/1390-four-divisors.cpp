class Solution {
public:
    int val = 0;
    int retdiv(int num)
    {
        int cnt = 0;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                cnt++;
                val += i;
                if (i != num / i) {
                    cnt++;
                    val += num / i;
                }
                if (cnt > 4) return 0;
            }
        }
        return cnt;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            val = 0;
            if(retdiv(nums[i]) == 4) 
            {
                ans += val;
            }
        }
        return ans;
    }
};
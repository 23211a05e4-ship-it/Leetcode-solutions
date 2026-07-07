class Solution {
public:
    long long sumAndMultiply(int n) {
        int r = 0;
        long long sum = 0,sum1 = 0;
        while(n > 0){
            r = n % 10;
            if(r != 0){
                sum = sum * 10 + r;
                sum1 += r;
            }
            n = n / 10;
        }
        string s = to_string(sum);
        reverse(s.begin(),s.end());
        long long ans = stoi(s)*sum1;
        return ans;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0,c = 0,n=prices.size(),mini=prices[0];
        for(int i = 1; i < n; i++)
        {
            c = prices[i] - mini;
            p = max(p,c);
            mini = min(mini,prices[i]);
        }
        return p;
    }
};
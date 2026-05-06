class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int msum, mini, sum, mp;
        msum = mp = 0;
        vector<int> suf(n,0);
        int maxi = arr[n-1];
        for(int i = n-2; i >= 0; i--) {
            mp = max(mp, maxi - arr[i]);
            suf[i] = mp;
            maxi = max(maxi, arr[i]);
        }
        mp = 0;
        mini = INT_MAX;
        for(int i = 0; i < n; i++) {
            mini = min(mini, arr[i]);
            mp = max(mp, arr[i] - mini);
            sum = mp;
            if(i + 1 < n) sum = mp + suf[i+1];
            msum = max(msum, sum);
        }
        return msum;
    }
};
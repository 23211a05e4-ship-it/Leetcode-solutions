class Solution {
public:
     bool isPal(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    int hlp(string& s, vector<int>& dp, int idx) {
        if (idx == s.size()) return 0;
        if (dp[idx] != -1) return dp[idx];
        int ans = 20001;
        for (int i = idx; i < s.size(); i++) {
            if (isPal(s, idx, i)) {
                int mini = 1 + hlp(s, dp, i + 1);
                ans = min(ans, mini);
            }
        }
        return dp[idx] = ans;
    }
    int minCut(string s) {
        int n = s.size();
        if (n == 1) return 0;
        vector<int> dp(n, -1);
        return hlp(s, dp, 0) - 1;
    }
};
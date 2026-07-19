class Solution {
public:
    int hlp(vector<vector<int>>&dp,string &text1,string &text2,int n,int m,int i,int j){
        if(i == n || j == m) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i] == text2[j]){
            return dp[i][j] = 1+hlp(dp,text1,text2,n,m,i+1,j+1);
        }
        return dp[i][j] = max(hlp(dp,text1,text2,n,m,i+1,j),hlp(dp,text1,text2,n,m,i,j+1));

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(),m = text2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return hlp(dp,text1,text2,n,m,0,0);
    }
};
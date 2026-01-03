class Solution {
public:
    vector<vector<int>>ans;
    void sol(vector<int>&v,int k,int n,vector<int>&temp,int idx,int sum,int cnt)
    {
        if (sum > n || cnt > k)
            return;

        if (cnt == k) {
            if (sum == n)
                ans.push_back(temp);
            return;
        }

        if (idx == 9)
            return;
        temp.push_back(v[idx]);
        sol(v,k,n,temp,idx+1,sum+v[idx],cnt+1);
        temp.pop_back();
        sol(v,k,n,temp,idx+1,sum,cnt);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v(9),temp;
        for(int i = 0; i < 9; i++) v[i] = i+1;
        sol(v,k,n,temp,0,0,0);
        return ans;
    }
};
class Solution {
public:
    bool fun(vector<vector<int>>& tasks,int ene){
        for(auto it : tasks){
            if(ene >= it[1]) ene -= it[0];
            else return false;
        }
        return ene >= 0;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        int low = 0 ,high = INT_MAX,ans = 0;
        sort(tasks.begin(), tasks.end(),
        [](vector<int>& a, vector<int>& b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });
        while(low <= high){
            int mid = (low+high)/2;
            if(fun(tasks,mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
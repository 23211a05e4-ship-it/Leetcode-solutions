class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX,cnt,n = landStartTime.size(), m = waterStartTime.size();
        for(int i = 0; i < n; i++){
            cnt = landStartTime[i]+landDuration[i];
            for(int j = 0; j < m; j++){
                if(waterStartTime[j] <= cnt){
                    ans = min(cnt+waterDuration[j],ans);
                }
                 else ans = min(ans, waterStartTime[j] + waterDuration[j]);
            }
        }
        for(int j = 0; j < m; j++){
            cnt = waterStartTime[j]+waterDuration[j];
            for(int i = 0; i < n; i++){
                if(landStartTime[i] <= cnt){
                    ans = min(cnt+landDuration[i],ans);
                }
                else ans = min( landDuration[i] + landStartTime[i],ans);
            }
        }
        return ans;
    }
};
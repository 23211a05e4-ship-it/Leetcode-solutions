class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            int t = k-nums[i];
            if(mp[t] > 0){
                cnt ++;
                mp[t]--;
            }
            else mp[nums[i]]++;
        }
        return cnt;
    }
};
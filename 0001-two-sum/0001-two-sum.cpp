class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int,int>mp;
        int a,b;
        for(int i = 0; i < nums.size(); i++){
            int t = tar-nums[i];
            if(mp.find(t) != mp.end()){
                a = i;
                b = mp[t];
                break;
            }
            mp[nums[i]] = i;
        }
        return {a,b};
    }
};
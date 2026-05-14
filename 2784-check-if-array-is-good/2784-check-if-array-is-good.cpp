class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end()), n = nums.size(),i;
        if(maxi+1 < n || n < maxi+1) return false;
        unordered_map<int,int>mp;
        for(i = 1; i < maxi; i++) mp[i]++;
        mp[maxi] = 2;
        for(i = 0; i < n; i++){
            if(mp.find(nums[i]) != mp.end())mp[nums[i]]--;
            if(mp[nums[i]] <= 0) mp.erase(nums[i]);
        }
        if(mp.size() == 0 && i == n) return true;
        return false;
    }
};
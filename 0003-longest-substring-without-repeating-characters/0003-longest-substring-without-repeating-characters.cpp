class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int l = 0,n = s.size(),ml = 1;
        unordered_map<char,int>mp;
        for(int r = 0; r < n; r++){
            mp[s[r]]++;
            while(mp[s[r]] > 1){
                mp[s[l]]--;
                l++;
            }
            ml = max(ml,r-l+1);
        }
        return ml;
    }
};
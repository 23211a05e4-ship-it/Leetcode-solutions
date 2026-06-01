class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size(), l = 0,maxln = 1;
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++){
            mp[fruits[i]]++;
            while(mp.size() > 2){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0) mp.erase(fruits[l]);
                l++;
            }
            maxln = max(i-l+1,maxln);
        }
        return maxln;
    }
};
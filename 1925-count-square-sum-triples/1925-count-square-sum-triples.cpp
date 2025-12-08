class Solution {
public:
    int countTriples(int n) {
        unordered_map<int,int>mp;
        int c = 0;
        for(int i = 1;i <= n; i++) mp[i*i] = i;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(mp.find(i*i + j*j) != mp.end()) c++;
            }
        }
        return c;
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        int l = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[0]){
                int j = i;
                while(l < s.size() && j < t.size()){
                    if(t[j] == s[l]){
                        l++;
                        j++;
                    }
                    else j++;
                    if(l == s.size()) return true;
                }
                l = 0;
            }
        }
        return false;
    }
};
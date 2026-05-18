class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() <= 1) return true;
        string ans ="";
        for(char ch : s){
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || 
            (ch >= '0' && ch <= '9')){
                if(ch >= 'A' && ch <= 'Z') ch = char(ch + 32);
                ans += ch;
            }
        }
        int n = ans.size();
        int l = 0,r = n-1;
        while(l <= r){
            if(ans[l] != ans[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
class Solution {
public:
    vector<vector<string>> ans;
    bool isPalin(string s){
        string k = s;
        reverse(s.begin(),s.end());
        return s == k;
    }
    void hlp(string s,vector<string> &temp){
       if(s.size() == 0){
            ans.push_back(temp);
            return;
       }
       for(int i = 0; i < s.size(); i++){
            string k = s.substr(0,i+1);
            if(isPalin(k)){
                temp.push_back(k);
                hlp(s.substr(i+1),temp);
                temp.pop_back();
            }
       }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        hlp(s,temp);
        return ans; 
    }
};
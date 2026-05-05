class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size() != s.size()) return false;
        int n = goal.size();
        int k = n;
        while(k--){
            char c = goal[n-1];
            goal.pop_back();
            goal = c+goal;
            if(s == goal) return true;
        }
        return false;
    }
};
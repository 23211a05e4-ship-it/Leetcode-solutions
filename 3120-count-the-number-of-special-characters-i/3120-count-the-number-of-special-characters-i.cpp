class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        unordered_set<char>st;
        for(char ch : word) st.insert(ch);
        for(char ch = 'a'; ch <= 'z'; ch++){
            if(st.find(toupper(ch)) != st.end() && st.find(tolower(ch)) != st.end() ) cnt++;
        }
        return cnt;
    }
};
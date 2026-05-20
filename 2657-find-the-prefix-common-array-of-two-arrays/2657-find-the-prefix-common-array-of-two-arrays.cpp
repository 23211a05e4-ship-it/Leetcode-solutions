class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(),cnt = 0;
        vector<int> v(n);
        unordered_set<int> stA, stB;
        for (int i = 0; i < n; i++) {
            if (stB.count(A[i])) cnt++;
            if (stA.count(B[i])) cnt++;
            if (A[i] == B[i]) cnt++;
            stA.insert(A[i]);
            stB.insert(B[i]);
            v[i] = cnt;
        }
        return v;
    }
};
class Solution {
public:
    bool check(vector<int>& arr) {
        int cnt = 0, n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[(i+1) % n]) cnt++;
        }
        return cnt <= 1;
    }
};
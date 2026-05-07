class Solution {
public:
    int furthestBuilding(vector<int>& arr, int b, int l) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < arr.size()-1; i++){
            int diff = arr[i+1] - arr[i];
            if(diff <= 0) continue;
            pq.push(diff);
            if(pq.size() > l){
                int a = pq.top();
                pq.pop();
                b -= a;
            }
            if(b < 0) return i;
        }
        return arr.size()-1;
    }
};
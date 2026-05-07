class Solution {
public:
    bool fun(vector<int>& arr,int cap,int days){
        int sum = 0,d = 1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > cap) return false;
            if(sum + arr[i] <= cap) sum += arr[i];
            else{
                sum = arr[i];
                d++;
            }
        }
        return d <= days;
    }
    int shipWithinDays(vector<int>& arr, int days) {
        int sum = accumulate(arr.begin(),arr.end(),0);
        int low = 1,high = sum,ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(fun(arr,mid,days)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
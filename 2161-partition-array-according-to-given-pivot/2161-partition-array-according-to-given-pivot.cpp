class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int j = n-1, k = 0; 
        vector<int>v(n,pivot);
        for(int i = 0; i < n; i++){
            if(nums[i] < pivot){
                v[k] = nums[i];
                k++;
            }
            if(nums[n-i-1] > pivot){
                v[j] = nums[n-i-1];
                j--;
            }
        }
        for(int i : v) cout << i << " ";
        return v;
    }
};
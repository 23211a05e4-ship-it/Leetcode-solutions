class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size(),maxi = 0;
        for (int i = 0; i <= n; i++) {
            while (!st.empty() &&
                   (i == n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int right = i;
                int left = st.empty() ? -1 : st.top();
                int width = right - left - 1;
                maxi = max(maxi, height * width);
            }
            st.push(i);
        }
        return maxi;
    }
};
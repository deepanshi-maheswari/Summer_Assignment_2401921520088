class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;

        for(int i = 0; i <= n; i++){
            while(!st.empty() && (i == n || heights[st.top()] >= heights[i])){
                int h = heights[st.top()];
                st.pop();

                int leftSmaller = st.empty() ? -1 : st.top();
                int width = i - leftSmaller - 1;

                maxArea = max(maxArea , h * width);
            }
            //store index of heights in stack
            st.push(i);
        }


        return maxArea;

    }
};

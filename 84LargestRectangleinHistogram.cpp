class Solution {
public:
    int Area(vector < int > & height) {
      stack < int > st;
      int mxA = 0;
      int n = height.size();
      for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || height[st.top()] >= height[i])) {
          int ht = height[st.top()];
          st.pop();
          int width;
          if (st.empty())
            width = i;
          else
            width = i - st.top() - 1;
          mxA = max(mxA, width * ht);
        }
        st.push(i);
      }
      return mxA;
    }
    int largestRectangleArea(vector<int>& heights) {
        return Area(heights);
    }
};

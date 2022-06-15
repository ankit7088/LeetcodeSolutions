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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> height(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1')
                    height[j]++;
                else
                    height[j]=0;
            }
            ans=max(ans,Area(height));
        }
        return ans;
    }
};
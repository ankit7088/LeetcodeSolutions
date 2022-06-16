class Solution {
public:
    void dfs(vector<vector<int>>& heights,int i,int j,int n,int m,int pre,vector<vector<int>> &ocean){
        if(i<0 || j<0 || i>=n || j>=m) return;
        if(ocean[i][j]!=0) return;
        if(heights[i][j]<pre) return;
        ocean[i][j]=1;
        dfs(heights,i-1,j,n,m,heights[i][j],ocean);
        dfs(heights,i+1,j,n,m,heights[i][j],ocean);
        dfs(heights,i,j-1,n,m,heights[i][j],ocean);
        dfs(heights,i,j+1,n,m,heights[i][j],ocean);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> ans;
        if(n==0)
            return ans;
        vector<vector<int>> pacific(n,vector<int> (m,0)),atlantic(n,vector<int> (m,0));
        for(int i=0;i<m;i++){
            dfs(heights,0,i,n,m,INT_MIN,pacific);
            dfs(heights,n-1,i,n,m,INT_MIN,atlantic);
        }
        for(int i=0;i<n;i++){
            dfs(heights,i,0,n,m,INT_MIN,pacific);
            dfs(heights,i,m-1,n,m,INT_MIN,atlantic);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j]==1 &&atlantic[i][j]==1){
                    vector<int> v(2);
                    v[0]=i;
                    v[1]=j;
                    ans.push_back(v);
                }
                
            }
        }
        return ans;
        
    }
};
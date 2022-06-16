class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=n || j>=m) return ;
        if(grid[i][j]!=0) return;
        grid[i][j]=1;
        dfs(i-1,j,n,m,grid);
        dfs(i+1,j,n,m,grid);
        dfs(i,j-1,n,m,grid);
        dfs(i,j+1,n,m,grid);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i*j==0 || i==n-1 || j==m-1){
                    if(grid[i][j]==0)
                        dfs(i,j,n,m,grid);
                }
            }
        }
        int count=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(grid[i][j]==0){
                    dfs(i,j,n,m,grid);
                    count++;
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid1,vector<vector<int>>& grid2,int &flag){
        
        if(i<0 || j<0 || i>=n || j>=m) return ;
        if(grid2[i][j]!=1) return ;
        if(grid1[i][j]!=grid2[i][j])
            flag=1;
        grid2[i][j]=0;
        dfs(i-1,j,n,m,grid1,grid2,flag);
        dfs(i+1,j,n,m,grid1,grid2,flag);
        dfs(i,j-1,n,m,grid1,grid2,flag);
        dfs(i,j+1,n,m,grid1,grid2,flag);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid2.size();
        int m=grid2[0].size();
        int flag=0,count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    dfs(i,j,n,m,grid1,grid2,flag);
                    // cout<<"kriti"<<" ";
                    if(flag==0){
                        count++;
                        
                    }
                    else
                        flag=0;
                        
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),rows;
        if(n&1)
            rows=n/2;
        else
            rows=n/2+1;
        for(int i=0;i<rows;i++){
            for(int j=i+1;j<=n-2*(i+1);j++){
                if(grid[i][j]!=0)
                    return false;
                if(grid[n-i-1][j]!=0)
                    return false;
                if(grid[j][i]!=0)
                    return false;
                if(grid[j][n-i-1]!=0)
                    return false;
                
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=i;j<=i;j++){
                if(grid[i][j]==0)
                    return false;
                if(grid[i][n-1-i]==0)
                    return false;
                if(grid[n-i-1][j]==0)
                    return false;
                if(grid[n-i-1][n-1-i]==0)
                    return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> t(n,vector<int> (m,0));
        int ans;
        for(int i=0;i<m;i++){
            t[n-1][i]=grid[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                ans=INT_MAX;
                for(int k=0;k<m;k++){
                    ans=min(ans,t[i+1][k]+moveCost[grid[i][j]][k]);
                }
                t[i][j]=ans+grid[i][j];
            }
        }
        return *min_element(t[0].begin(),t[0].end());
    }
};
class Solution {
public:
    vector<pair<int,int>> moments={
            {1,0},{-1,0},{0,1},{0,-1}
        };
    bool isValid(int i,int j,int n,int m){
        return (i>=0 && j>=0 && i<n && j<m);
    }
   
    int maxDistance(vector<vector<int>>& grid) {
        //Multi source bfs
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int> (n,0)),level(n,vector<int> (n,INT_MAX));
        int ans=0,mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>mx)
                    mx=grid[i][j];
            }
        }
        
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mx==grid[i][j]){
                    q.push({i,j});
                    level[i][j]=0;
                    visited[i][j]=1;
                }
            }
        }
        while(!q.empty()){
            int vertexX=q.front().first;
            int vertexY=q.front().second;
            q.pop();
            for(auto &moment:moments){
                int childX=moment.first+vertexX;
                int childY=moment.second+vertexY;
                if(!isValid(childX,childY,n,m)) continue;
                if(visited[childX][childY]) continue;
                q.push({childX,childY});
                level[childX][childY]=level[vertexX][vertexY]+1;
                visited[childX][childY]=1;
                ans=max(ans,level[childX][childY]);
            }
            
        }
        return (ans==0)?-1:ans;
    }
};
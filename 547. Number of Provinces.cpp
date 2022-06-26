class Solution {
public:
    void dfs(int vertex,vector<int> &visited,vector<int> list[]){
        visited[vertex]=1;
        for(auto &child:list[vertex]){
            if(visited[child]) continue;
            dfs(child,visited,list);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> visited(n+1,0);
        vector<int> list[n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]==1){
                    list[i+1].push_back(j+1);
                    list[j+1].push_back(i+1);
                }
            }
        }
        int ct=0;
        for(int i=1;i<=n;i++){
            if(visited[i]) continue;
            dfs(i,visited,list);
            ct++;
        }
        return ct;
    }
};
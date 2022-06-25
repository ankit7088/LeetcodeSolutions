class Solution {
    void dfs(int vertex,vector<int> &visited,vector<vector<int>>& rooms){
    visited[vertex]=true;
    for(int &child:rooms[vertex]){
        if(visited[child]) continue;
        dfs(child,visited,rooms);
    }
}
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int ct=0;
    int n=rooms.size();
    vector<int> visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        dfs(i,visited,rooms);
        ct++;
    }
    if(ct==1)
    return true;
    else 
    return false;
    }
};
class Solution {
public:
    void dfs(int vertex,vector<vector<int>> &ans,vector<int> temp,vector<vector<int>>& graph){
        //visited[vertex]=1;
        temp.push_back(vertex);
        if(vertex==graph.size()-1){
            ans.push_back(temp);
            return;
        }
        for(auto &child:graph[vertex]){
            //if(visited[child]) continue;
            dfs(child,ans,temp,graph);
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(0,ans,temp,graph);
        return ans;
    }
};
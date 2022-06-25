class Solution {
public:
    void dfs(int vertex,vector<int> list[],vector<int> &visited,int &ct){
        visited[vertex]=1;
        ct++;
        for(int &child:list[vertex]){
            if(visited[child]) continue;
            dfs(child,list,visited,ct);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> visited(n,0);
        vector<int> list[n];
        for(auto &it:edges){
            list[it[0]].push_back(it[1]);
            list[it[1]].push_back(it[0]);
        }
        int ct=0;
        long long pairs=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            dfs(i,list,visited,ct);
               pairs+=sum*1LL*ct;
             sum+=ct;
               ct=0;
        }
        return pairs;
               
    }
};
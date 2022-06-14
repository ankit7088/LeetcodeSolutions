class Solution {
public:
    int solve(vector<int> &cost,int index,vector<int> &t){
        if(index==cost.size()-1 || index==cost.size()-2)
            return cost[index];
        if(t[index]!=0)
            return t[index];
        int x=solve(cost,index+1,t);
        int y=solve(cost,index+2,t);
        return t[index]=min(x,y)+cost[index];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> t(n+1);
        int x=solve(cost,0,t);
        int y=solve(cost,1,t);
        return min(x,y);
        
    }
};
class Solution {
public:
    int solve(int index,vector<int>& arr,int k,int &n,vector<int> &t){
        if(index==arr.size()) return 0;
        int len=0;
        int mx=INT_MIN;
        int ans=INT_MIN;
        if(t[index]!=-1)
            return t[index];
        for(int i=index;i<min(n,index+k);i++){
            len++;
            mx=max(mx,arr[i]);
            int sum=len*mx + solve(i+1,arr,k,n,t);
            ans=max(ans,sum);
            
        }
        return t[index]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> t(n,-1);
        return solve(0,arr,k,n,t);
    }
};
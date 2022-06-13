class Solution {
public:
    long long int t[38];
    void solve(int n){
        t[0]=0,t[1]=1,t[2]=1;
        for(int i=3;i<=n;i++){
            t[i]=t[i-1]+t[i-2]+t[i-3];
            
        }
    }
    int tribonacci(int n) {
        // memset(t,-1,sizeof(t));
        
        solve(n);
        return t[n];
    }
};
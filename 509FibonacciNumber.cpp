class Solution {
public:
    int t[31];
    void solve(int n){
        // if(n==0)
        //     return 0;
        // if(n==1)
        //     return 1;
        // if(t[n]!=-1)
        //     return t[n];
        // return t[n]=fib(n-2)+fib(n-1);
        t[0]=0,t[1]=1;
        for(int i=2;i<=n;i++){
            t[i]=t[i-1]+t[i-2];
            
        }
    }
    int fib(int n) {
        // memset(t,-1,sizeof(t));
        
        solve(n);
        return t[n];
    }
};
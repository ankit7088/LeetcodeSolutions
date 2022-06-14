class Solution {
public:
    // int t[46];
    // int solve(int n){
    //     if(n==0)
    //         return 1;
    //     if(n<0)
    //         return 0;
    //     if(t[n]!=-1)
    //         return t[n];
    //     return t[n]=solve(n-1)+solve(n-2);
    // }
    int climbStairs(int n) {
        // memset(t,-1,sizeof(t));
        // return solve(n);
        int t[n+1];
        t[0]=1,t[1]=1;
        for(int i=2;i<=n;i++){
            t[i]=t[i-1]+t[i-2];
        }
        return t[n];
        
    }
};
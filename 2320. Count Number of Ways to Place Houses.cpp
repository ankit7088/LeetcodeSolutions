class Solution {
public:
    long mod=1e9+7;
    int countHousePlacements(int n) {
        long int t[n+3];
        t[0]=1;
        t[1]=2;
        for(int i=2;i<=n;i++)
            t[i]=(t[i-1]+t[i-2])%mod;
        for(int i=1;i<=n;i++)
            t[i]=(t[i]*t[i])%mod;
        return t[n];
        
    }
};
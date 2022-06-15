class Solution {
public:
    int countVowelStrings(int n) {
        int ans;
        vector<int> t(5,1);
        if(n==1)
            return 5;
        while(--n){
            for(int i=3;i>=0;i--)
                t[i]+=t[i+1];
            
        }
        for(int ele:t)
            ans+=ele;
        return ans;
    }
};
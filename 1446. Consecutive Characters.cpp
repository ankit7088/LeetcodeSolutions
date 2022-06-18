class Solution {
public:
    int maxPower(string s) {
    if(s.size()==0)
    return 0;
    int ans=1,count=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])
        {
            count++;
            ans=max(ans,count);
        }
        else
        count=1;
    }
    return ans;
    }
};
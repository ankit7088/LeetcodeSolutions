class Solution {
public:
    string solve(string &s1,string &s2){
        string ans="";
        int mn=min(s1.size(),s2.size());
        for(int i=0;i<mn;i++){
            if(s1[i]!=s2[i])
                break;
            ans+=s1[i];
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string pre=strs[0];
        for(int i=1;i<n;i++){
            pre=solve(strs[i],pre);
        }
        return pre;
    }
};
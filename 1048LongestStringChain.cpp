class Solution {
public:
    static bool compare(string &s1,string &s2){
        return s1.size() < s2.size();
    }
        
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
        int ans=0;
        map<string,int> m;
        for(auto s:words){
            m.insert({s,1});
            for(int i=0;i<s.size();i++){
                string newString=s;
                newString.erase(newString.begin()+i);
                if(m.find(newString)!=m.end())
                m[s]=max(m[s],m[newString]+1);
                // if(m.find(newString)!=m.end()){
                //     m.insert({s,max(m[s],m[newString]+1)});
                // }
            }
            ans=max(ans,m[s]);
        }
        return ans;
    }
};

class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        
        map<string,int> m;
        for(int i=0;i<messages.size();i++){
            int ct=0;
            string s=messages[i];
            for(int j=0;j<s.size();j++) 
                if(s[j]==' ')
                    ct++;
            ct++;
            m[senders[i]]+=ct;
            
        }
        string output="";
        int val=INT_MIN;
        for(auto &it:m){
            if(it.second>=val){
                val=it.second;
                output=it.first;
            }
        }
        return output;
    }
};
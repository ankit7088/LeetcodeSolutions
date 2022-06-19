class Solution {
public:
    string greatestLetter(string s) {
        string output="";
        vector<int> hashUpper(26,0),hashLower(26,0);
        int n=s.size();
        if(n==0)
            return output;
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z')
                hashUpper[s[i]-'A']++;
        }
        
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z')
                hashLower[s[i]-'a']++;
        }
        for(int i=25;i>=0;i--){
            if(hashUpper[i] && hashLower[i]){
                output+=char(i+'A');
                break;
            }
        }
        return output;
    }
};
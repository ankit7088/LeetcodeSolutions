class Solution {
public:
    int countAsterisks(string s) {
        int n=s.length();
        int lineCount=0,sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='|')
                lineCount++;
            if(lineCount==0){
                if(s[i]=='*'){
                    sum++;
                }
            }
            if(lineCount==2)
                lineCount=0;
        }
        return sum;
    }
};
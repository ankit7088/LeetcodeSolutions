class Solution {
public:
    string multi(string s,int n){
        string temp=s;
        for(int i=0;i<n-1;i++)
            temp+=s;
        return temp;
    }
    string decodeString(string s) {
        string currString="";
        int currNum=0;
        stack<string> st;
        int n=s.size();
        for(auto ele:s){
            if(ele=='['){
                st.push(currString);
                st.push(to_string(currNum));
                currNum=0;
                currString="";
            }
            else if(ele==']'){
                int preNum=stoi(st.top());
                st.pop();
                string preString=st.top();
                st.pop();
                currString=preString + multi(currString,preNum);
            }
            else if('0'<=ele && ele<='9' )
                currNum=currNum*10 + ele-'0';
            else
                currString+=ele;
        }
        return currString;
    }
};
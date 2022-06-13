class Solution {
public:
    bool check(string &password){
        for(int i=1;i<password.size();i++){
            if(password[i]==password[i-1])
                return true;
            
        }
        return false;
    }
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8)
            return false;
        unordered_set<char> st;
        string s="!@#$%^&*()-+";
        for(auto it:s)
            st.insert(it);
        int lo=0,up=0,sp=0,dgt=0;
        for(int i=0;i<password.size();i++){
            if('A'<=password[i] && password[i]<='Z') up++;
            if('a'<=password[i] && password[i]<='z') lo++;
            if('0'<=password[i] && password[i]<='9') dgt++;
            if(st.find(password[i])!=st.end()) sp++;
            
            
        }
        if(check(password) || lo==0 || up==0 || dgt==0 || sp==0) return false;
        return true;
    }
};
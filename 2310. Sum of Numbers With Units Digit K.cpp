class Solution {
public:
    int help(int num,vector<int> &t,vector<int> &v){
        if(num==0) return 0;
        if(num<0) return INT_MAX-1;//difficult to think initially 
        if(t[num]!=-1)
            return t[num];
        int ans=INT_MAX-1;
        for(int it:v){
            ans=min(ans,1+help(num-it,t,v));
        }
        return t[num]=ans;
    }
    int minimumNumbers(int num, int k) {
        vector<int> v;
        for(int i=k;i<=num;i=i+10)
            if(i!=0)
            v.push_back(i);
        
        vector<int> t(3001,-1);
        // memset(t,-1,sizeof(t));
        int ans= help(num,t,v);
        return (ans==INT_MAX-1)?-1:ans;
        
        
        
       
    }
};
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre=nums;
        
        while(1){
            int flag=0;
            if(n==1)
                break;
            vector<int> curr;
            for(int i=0;i<pre.size();i=i+2){
                if(flag==0){
                    curr.push_back(min(pre[i],pre[i+1]));
                    flag=1;
                }
                else{
                    curr.push_back(max(pre[i],pre[i+1]));
                    flag=0;
                }
                
            }
            pre=curr;
            n/=2;
            
        }
        return pre[0];
    }
};
class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ct=0,Num=0;
        int n=nums.size();
        for(int i=31;i>=0;i--){
            for(int j=0;j<n;j++){
                ct+=((nums[j]>>i)&1);
            }
            if(ct>0)
            Num+=pow(2,i);
            ct=0;
        }
        return Num;
    }
};
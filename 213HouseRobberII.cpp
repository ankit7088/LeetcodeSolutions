class Solution {
public:
    int help(vector<int>& nums,int n,int index,vector<int> &dp){
        if(n<index)
            return 0;
        if(n==index)
            return nums[n];
        if(dp[n]!=-1) return dp[n];
        return dp[n]=max(nums[n]+help(nums,n-2,index,dp),help(nums,n-1,index,dp));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        int x=help(nums,nums.size()-1,1,dp);
        for(int i=0;i<nums.size();i++)
            dp[i]=-1;
        int y=help(nums,nums.size()-2,0,dp);
        cout<<x<<" "<<y<<" ";
        return max(x,y);
    }
};
class Solution {
public:
    
    int findClosestNumber(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
            ans=min(ans,abs(nums[i]));
        for(int i=0;i<nums.size();i++)
            if(ans==nums[i])
                return ans;
        return -ans;
    }
};
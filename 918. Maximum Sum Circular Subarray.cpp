class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum=INT_MIN,currMaxSum=0,minSum=INT_MAX,currMinSum=0,total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            currMaxSum+=nums[i];
            if(currMaxSum>maxSum)
                maxSum=currMaxSum;
            if(currMaxSum<0)
                currMaxSum=0;
            currMinSum+=nums[i];
            if(currMinSum<minSum)
                minSum=currMinSum;
            if(currMinSum>0)
                currMinSum=0;
        }
        if(total==minSum)
            return maxSum;
        return max(maxSum,total-minSum);
    }
};
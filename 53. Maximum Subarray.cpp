class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxNegative=INT_MIN;
        int maxSum=INT_MIN,currSum=0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            if(currSum>maxSum)
                maxSum=currSum;
            if(currSum<0){
                maxNegative=max(maxNegative,currSum);
                currSum=0;
            }
        }
        
        
        return maxSum==INT_MIN?maxNegative:maxSum;
    }
};
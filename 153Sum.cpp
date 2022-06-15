class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int start=i+1,end=nums.size()-1,sum=0-nums[i];
                while(start<end){
                    if(nums[start]+nums[end]==sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        ans.push_back(temp);
                        while(start<end && nums[start]==nums[start+1]) start++;
                        while(start<end && nums[end]==nums[end-1]) end--;
                        start++;
                        end--;
                    }
                    else if(nums[start]+nums[end]<sum) start++;
                    else end--;
                }
            }
        }
        return ans;
    }
};
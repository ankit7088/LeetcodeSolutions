class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start=0,end=0,count=0;
        while(end<n){
            if(nums[end]-nums[start]<=k)
                end++;
            else{
                start=end;
                count++;
            }
        }
        count++;
        return count;
    }
};
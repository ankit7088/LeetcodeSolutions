class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                nums[j++]=nums[i];
            }
        }
        nums.resize(j);
        return nums;
    }
};
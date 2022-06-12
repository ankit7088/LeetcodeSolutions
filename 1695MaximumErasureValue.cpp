class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        unordered_set<int> s;
        int start=0,end=0;
        int sum=0,ans=0;
        while(end<n){
            sum+=nums[end];
            while(s.find(nums[end])!=s.end()){
                sum-=nums[start];
                s.erase(nums[start]);
                start++;
            }
            ans=max(ans,sum);
            s.insert(nums[end]);
           end++;
            
        }
        return ans;
    }
};
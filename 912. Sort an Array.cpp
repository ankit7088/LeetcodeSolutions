class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums;
        priority_queue<int, vector<int>, greater<int> > minHeap;
        for(auto &it:nums){
            minHeap.push(it);
        }
        int i=0;
        while(!minHeap.empty()){
            nums[i]=minHeap.top();
            minHeap.pop();
            i++;
        }
        return nums;
    }
};
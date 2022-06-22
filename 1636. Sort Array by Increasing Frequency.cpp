class Solution {
  
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        
        unordered_map<int,int> m;
        for(auto &it:nums){
            m[it]++;
        }
        priority_queue<pair<int,int>> minHeap;
        for(auto &it:m){
            minHeap.push({-1*it.second,it.first});
        }
        while(!minHeap.empty()){
            int fre=-1*minHeap.top().first;
            int val=minHeap.top().second;
            for(int i=1;i<=fre;i++)
                ans.push_back(val);
            minHeap.pop();
        }
        return ans;
        
    }
};
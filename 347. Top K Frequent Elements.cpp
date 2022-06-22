class Solution {
    typedef pair<int, int> pd;
   
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //Heap Approach
        vector<int> ans;
        priority_queue<pd,vector<pd>,greater<pd>> minHeap;
        unordered_map<int,int> m;
        for(auto &it:nums){
            m[it]++;
        }
        for(auto &it:m){
            cout<<it.first<<" "<<it.second<<" ";
            minHeap.push({it.second,it.first});
            // cout<<minHeap.top().first<<" "<<minHeap.top().second<<" ";
            if(minHeap.size()>k)
                minHeap.pop();
        }
        
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int> v=intervals[0];
        for(auto it:intervals){
            if(v[1]>=it[0])
                v[1]=max(it[1],v[1]);
            else{
                ans.push_back(v);
                v=it;
            }
                    
        }
        ans.push_back(v);
        return ans;
    }
};
class Solution {
    typedef pair<int, pair<int,int>> pd;
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //Heap Approach
        vector<vector<int>> ans;
        priority_queue<pd> maxHeap;
        int n=points.size();
        for(int i=0;i<n;i++){
            int pointsX=points[i][0];
            int pointsY=points[i][1];
            maxHeap.push({pointsX*pointsX+pointsY*pointsY,{pointsX,pointsY}});
            if(maxHeap.size()>k)
                maxHeap.pop();
        }
        while(!maxHeap.empty()){
            vector<int> v(2);
            v[0]=maxHeap.top().second.first;
            v[1]=maxHeap.top().second.second;
            ans.push_back(v);
            maxHeap.pop();
            
        }
        return ans;
    }
};
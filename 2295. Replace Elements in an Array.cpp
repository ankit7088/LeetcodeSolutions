class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        vector<int> v=nums;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
            
        }
        for(auto &it:operations){
            if(m.find(it[0])!=m.end()){
                int k=m[it[0]];
                m.erase(it[0]);
                v[k]=it[1];
                m[it[1]]=k;
            }
        }
        return v;
        
    }
};
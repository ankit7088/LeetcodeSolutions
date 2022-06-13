class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> &ans,vector<int> &v,vector<int> &fre){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return ;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!fre[i]){
                v.push_back(nums[i]);
                fre[i]=1;
                solve(nums,ans,v,fre);
                fre[i]=0;
                v.pop_back();
            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> v,fre(n,0);
        solve(nums,ans,v,fre);
        return ans;
        
        
    }
};
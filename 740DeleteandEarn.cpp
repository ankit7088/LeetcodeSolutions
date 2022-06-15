class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        vector<int> fre(n,0);
        for(int ele:nums){
            fre[ele]+=ele;
        }
        int i=0,e=0;
        for(int j=0;j<n;j++){
            int ni=fre[j]+e;
            int ne=max(i,e);
            i=ni;
            e=ne;
        }
        return max(i,e);
        
    }
};
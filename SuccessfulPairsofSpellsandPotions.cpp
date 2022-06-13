class Solution {
public:
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        long long start,end,mid;
        int index;
        for(int i=0;i<spells.size();i++){
            start=0,end=potions.size()-1;
            index=-1,mid=-1;
            while(start<=end){
                mid=start+(end-start)/2;
                if(success<=spells[i]*1LL*potions[mid]){
                    index=mid;
                    end=mid-1;
                }
                else
                    start=mid+1;
            }
            if(index==-1) ans.push_back(0);
            else ans.push_back(potions.size()-index);
        }
        return ans;
    }
};
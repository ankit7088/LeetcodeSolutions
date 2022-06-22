class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int maxI=values[0],sum=0;
        for(int i=1;i<values.size();i++){
            int currJ=values[i]-i;
            sum=max(sum,maxI+currJ);
            
            int currI=values[i]+i;
            maxI=max(maxI,currI);
        }
        return sum;
    }
};
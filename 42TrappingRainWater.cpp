class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> mL(n,0),mR(n,0),water(n,0);
        mL[0]=height[0];
        for(int i=1;i<n;i++){
            mL[i]=max(mL[i-1],height[i]);
        }
        mR[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            mR[i]=max(mR[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            water[i]=min(mR[i],mL[i])-height[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=water[i];
        }
        return sum;
    }
};
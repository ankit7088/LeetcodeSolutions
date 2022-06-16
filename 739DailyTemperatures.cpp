class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v;
        stack<pair<int,int>> st;
        int n=temperatures.size();
        for(int i=n-1;i>=0;i--){
            if(st.empty()) v.push_back(0);
            if(!st.empty() && st.top().first>temperatures[i])
                v.push_back(st.top().second-i);
            if(!st.empty() && st.top().first<=temperatures[i]){
                while(!st.empty() && st.top().first<=temperatures[i]){
                    st.pop();
                }
                if(st.empty())
                    v.push_back(0);
                else 
                    v.push_back(st.top().second-i);
            }
            st.push({temperatures[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
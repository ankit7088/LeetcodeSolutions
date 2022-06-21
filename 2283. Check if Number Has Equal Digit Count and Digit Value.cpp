class Solution {
public:
    bool digitCount(string num) {
        vector<int> hashNum(10,0);
        int n=num.size();
        for(int i=0;i<n;i++){
            hashNum[num[i]-'0']++;
        }
        for(int i=0;i<n;i++){
            if(num[i]-'0'!=hashNum[i])
                return false;
        }
        return true;
    }
};
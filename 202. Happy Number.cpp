class Solution {
public:
    int calSumDigit(int n){
        int sum=0;
        int rem=0;
        while(n){
            rem=n%10;
            sum+=rem*rem;
            n/=10;
            
        }
        return sum;
    }
    bool isHappy(int n) {
        // unordered_set<int> s;
        // s.insert(n);
        while(1){
            if(n==1)
                return true;
            n=calSumDigit(n);
            
            // if(s.find(n)!=s.end())
            //     return false;
            if(n==4)
                return false;
            // s.insert(n);
        }
        return false;
    }
};
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        int n=brackets.size();
        if(n==0)
            return 0;
        double tax=0,taxes=0;
        if(brackets[0][0]<=income)
        {
            tax=(brackets[0][0]*brackets[0][1])/100.0;
            taxes+=tax;
            income=income-brackets[0][0];
        }
        else
        {
            tax=(income*brackets[0][1])/100.0;
            taxes+=tax;
            income=0;
            
        }
        
        
        for(int i=1;i<n;i++){
            if(income>=brackets[i][0]-brackets[i-1][0]){
                tax=((brackets[i][0]-brackets[i-1][0])*brackets[i][1])/100.0;
                income-=(brackets[i][0]-brackets[i-1][0]);
                taxes+=tax;
            }
            else{
                tax=(income*brackets[i][1])/100.0;
                taxes+=tax;
                break;
            }
        }
        // cout<<fixed<<setprecision(5)<<taxes<<endl;
        
        return taxes;
        
    }
};
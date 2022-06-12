class Solution {
public:
    void combi(string &digits,vector<string> &v,string output,vector<string> &mapping,int index){
        if(index>=digits.size()){
            v.push_back(output);
            return;
        }
        int num=digits[index]-'0';
        string val=mapping[num];
        
        for(int i=0;i<val.size();i++){
            output.push_back(val[i]);
            combi(digits,v,output,mapping,index+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.size()==0)
            return v;
        string output;
        vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combi(digits,v,output,mapping,0);
        return v;
    }
};
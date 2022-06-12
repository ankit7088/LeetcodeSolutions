
class Solution {
public:
    void path(TreeNode* root,string s,long long int &sum){
        if(!root) return;
        s+=to_string(root->val);
        cout<<s<<" ";
        path(root->left,s,sum);
        
        
        path(root->right,s,sum);
        if(root->left==NULL && root->right==NULL){
            sum+=stoi(s);
        cout<<"sum :"<<sum<<" ";
        }
        
        
        
    }
    int sumNumbers(TreeNode* root) {
        string s="";
        long long int sum=0;
        path(root,s,sum);
        return sum;
    }
};
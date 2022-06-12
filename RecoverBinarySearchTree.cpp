class Solution {
public:
    TreeNode *pre,*first,*last;
    int flag=0;
    void check(TreeNode* root){
        if(root==NULL)
            return;
        
        check(root->left);
        
        if(first==NULL && (pre->val>root->val)){
                first=pre;
                last=root;
            }
            else if(pre->val>root->val){
                last=root;
            }   
        
        pre=root;
                
        
        check(root->right);
    }
    void recoverTree(TreeNode* root) {
        first=NULL,last=NULL;
        pre=new TreeNode(INT_MIN);
        check(root);
        swap(first->val,last->val);
        
    }
};
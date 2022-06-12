class Solution {
public:
    void path(TreeNode* root,int level,vector<int> &v){
        if(!root) return;
        if(level==v.size()){
            v.push_back(root->val);
        }
        path(root->right,level+1,v);
        path(root->left,level+1,v);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        path(root,0,v);
        return v;
    }
};
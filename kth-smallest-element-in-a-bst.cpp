class Solution {
public:
int smallest(TreeNode* root,int &k){
    if(root==NULL)
	    return 0;
	int Left=smallest(root->left,k);
        
	if(Left!=0)
        return Left;
        
	k--;
	if(k==0)
       return root->val;
        
	
	return smallest(root->right,k);
        
    }

    int kthSmallest(TreeNode* root, int k) {
        return smallest(root,k);
        
}
};
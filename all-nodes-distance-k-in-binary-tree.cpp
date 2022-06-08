class Solution {
    
public:
    void track(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &trackParent){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    trackParent.insert({node->left,node});
                    q.push(node->left);
                }
                if(node->right){
                    trackParent[node->right]=node;
                    q.push(node->right);
                }
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> trackParent;
        track(root,trackParent);
        unordered_map<TreeNode*,bool> visited;
        queue<TreeNode*> q;
        visited[target]=true;
        q.push(target);
        int currLevel=0;
        while(!q.empty()){
            int sz=q.size();
            if(currLevel++==k) break;
            for(int i=0;i<sz;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left]=true;
                }
                if(node->right && !visited[node->right]){
                    q.push(node->right);
                    visited[node->right]=true;
                }
                if(trackParent[node] && !visited[trackParent[node]]){
                    q.push(trackParent[node]);
                    visited[trackParent[node]]=true;
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* node=q.front();
            ans.push_back(node->val);
            q.pop();
        }
        return ans;
        
        
    }
};
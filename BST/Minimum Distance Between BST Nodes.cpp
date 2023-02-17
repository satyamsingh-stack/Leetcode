class Solution {
public:
    TreeNode* pre=NULL;
    void inorder(TreeNode* root, int &ans){
        if(root==NULL)
            return ;
        inorder(root->left,ans);
        if(pre!=NULL)
            ans=min(ans,root->val-pre->val);
        pre=root;
        inorder(root->right,ans);
    }
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        inorder(root,ans);
        return ans;
    }
};

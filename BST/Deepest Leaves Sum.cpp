/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    int maxdepth(TreeNode *root){
        if(root==NULL)
            return 0;
        return 1+max(maxdepth(root->left),maxdepth(root->right));
    }
    void findsum(TreeNode *root,int curr,int height){
        if(root!=NULL){
            if(curr==height)
                sum+=root->val;
            findsum(root->left,curr+1,height);
            findsum(root->right,curr+1,height);
        }
    }
    int deepestLeavesSum(TreeNode* root){
        int height=maxdepth(root);
        findsum(root,1,height);
        return sum;
    }
};

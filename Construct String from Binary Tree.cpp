class Solution {
public:
    string res = "";
    void preorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        res += '(';
        res += to_string(root -> val);
        if(root -> left == NULL && root -> right){
            res += "()";
        }
        
        preorder(root -> left);
        preorder(root -> right);   
        res += ')';
    }
    string tree2str(TreeNode* root) {
        preorder(root);
        return res.substr(1, res.size() - 2);
    }
};

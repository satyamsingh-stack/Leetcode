class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false){
            int size=q.size();
            vector<int> row;
            for(int i=0;i<size;i++){
                auto temp=q.front();
                q.pop();
                row.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            ans.push_back(row);
        }
        return ans;
    }
};

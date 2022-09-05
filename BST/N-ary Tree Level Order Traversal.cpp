/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<Node*> q;
        q.push(root);
        vector<int> temp;
        temp.push_back(root->val);
        ans.push_back(temp);
        while(!q.empty()){
            temp.clear();
            int node=q.size();
            while(node--){
                Node *curr=q.front();
                q.pop();
                for(auto dummy:curr->children){
                    temp.push_back(dummy->val);
                    q.push(dummy);
                }
            }
            if(temp.empty())
                continue;
            ans.push_back(temp);
        }
        return ans;
        
    }
};

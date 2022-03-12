class Solution {
public:
     Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> m;
        Node* cur = head;
        while(cur){
            Node* newNode = new Node(cur->val);
            m[cur] = newNode;
            cur = cur->next;
        }
        cur = head;
        while(cur){
            m[cur]->next = m[cur->next];
            m[cur]->random = m[cur->random];
            cur = cur->next;
        }
        return m[head];
    } 
};

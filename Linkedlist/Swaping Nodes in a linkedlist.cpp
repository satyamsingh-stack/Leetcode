/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         if(head==NULL) 
            return NULL;
        ListNode *curr=head;
        int l=0;
        while(curr!=NULL){
            l++;
            curr=curr->next;
        }
        if(l==1)
            return head;
        curr=head;
        for(int i=1;i < l- k + 1;i++)
            curr=curr->next;
        ListNode *n_end=curr;
        ListNode *curr1=head;
        
        for(int i=1;i<k;i++)
            curr1=curr1->next;
        
        ListNode *n_start=curr1;
        
        int temp=n_start->val;
        n_start->val = n_end->val;
        n_end->val=temp;
        return head;
    }
};

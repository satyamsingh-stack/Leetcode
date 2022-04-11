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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        int l=0;
        while(curr!=NULL){
            l++;
            curr=curr->next;
        }
        curr=head;
        if(l==n)
            return head->next;
        for(int i=1;i<l-n+1;i++)
            curr=curr->next;
        ListNode *nth_node=curr;
        curr=head;
        while(curr!=NULL){
            if(curr->next==nth_node)
                curr->next=nth_node->next;
            curr=curr->next;
        }
        return head;
    }
};

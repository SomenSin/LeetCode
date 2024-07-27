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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*slow=head,*fast=head,*prev=NULL;
        int n=0;
        while( fast && fast->next!=NULL ) {
            n++;
        prev=slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(n==0) {
            return NULL;
        }
        prev->next = slow->next;
        return head;

    }
};
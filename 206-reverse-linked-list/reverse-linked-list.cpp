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
    ListNode* reverseList(ListNode* head) {
        if(!head) {
            return NULL;
        }
        ListNode * prev=NULL,* cur=head,* nxt=head->next;
        while( cur->next!=NULL ) {
            cur->next = prev;
            prev = cur;
            cur = nxt;
            nxt=nxt->next;
        }
        cur->next = prev;
        return cur;
    }
};
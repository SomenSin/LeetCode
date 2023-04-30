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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dum=head;
        
        while(dum!=NULL) {
            ListNode* end=dum;
            dum=dum->next;
            while(dum->val!=0) {
                end->val += dum->val;
                dum = dum->next;
            }
            end->next = dum->next;
            dum = dum->next;
        }
        return head;
    }
};
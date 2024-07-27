
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if( !head || head->next==NULL) {
            return head;
        }
        ListNode *evenHead=head->next,*odd=head,*even=head->next;

        while(even && even->next) {
            odd->next = even->next;
            odd = even->next;
            even->next = odd->next;
            even = odd->next;
        }
        odd->next = evenHead;

        return head;
    }
};
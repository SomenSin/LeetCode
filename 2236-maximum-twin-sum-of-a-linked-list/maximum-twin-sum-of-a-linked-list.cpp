class Solution {
public:
    int pairSum(ListNode* head) {
        if (!head || !head->next) return 0;
        if (head->next->next == NULL) {
            return head->val + head->next->val;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;

        // Finding the middle of the linked list
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reversing the second half of the linked list
        ListNode* cur = slow,*prev=NULL,*nxt;
        while (cur) {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }

        // Finding the maximum twin sum
        int ans = 0; // Initialize ans to 0
        ListNode* first = head;
        ListNode* second = prev;
        while (second) {
            int sum = first->val + second->val;
            ans = max(ans, sum);
            first = first->next;
            second = second->next;
        }

        return ans;
    }
};

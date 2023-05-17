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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode* slow = head,* fast = head;

        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            n++;
        }
        cout<<n;
        ListNode* pre = NULL,* tmp;
        while(slow) {
            tmp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = tmp;
        }
        int ans = 0;
        while(pre) {
            int sum = head->val+pre->val;
            ans = max(ans,sum);
            head = head->next;
            pre = pre->next;
        }
        return ans;

    }
};

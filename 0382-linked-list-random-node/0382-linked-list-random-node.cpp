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
    int n=1;
    ListNode* t2;
    Solution(ListNode* head) {
        ListNode* tmp=head;
        t2 = head;
        while(tmp->next != NULL) {
            ++n;
            tmp = tmp->next;
        }
    }
    
    int getRandom() {
        int r = 1+(rand()%n);
        int ans;
        ListNode* tt=t2;
        while(r--) {
            ans = tt->val;
            tt = tt->next;
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
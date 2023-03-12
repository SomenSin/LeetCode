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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>> pq;
        int n=lists.size();
        if(n==0) {
            return nullptr;
        }
        for(int i=0;i<n;i++)
        {
            while(lists[i]!=NULL)
            {
                pq.push({-lists[i]->val,lists[i]});
                lists[i] = lists[i]->next;
            }
        }
        ListNode* head=nullptr;
        ListNode* tmp=nullptr;
        if(pq.empty()) {
            return nullptr;
        }
        head = tmp =pq.top().second;

        pq.pop();
        
        while(pq.size()) {
            tmp->next = pq.top().second;
            tmp = pq.top().second;
            pq.pop();
        }
        tmp->next = NULL;
        return head;

    }
};

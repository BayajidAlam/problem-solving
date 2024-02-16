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
    ListNode *solve(ListNode* head){
        if(head == NULL || head->next == NULL) return head;

        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *next = cur->next;

        int cnt = 0;
        while(cnt < 2){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            cnt++;
        }

        if(next != NULL){
            ListNode *reckAns = solve(next);
            head->next = reckAns;
        }

        return prev;
    }
    ListNode* swapPairs(ListNode* head) {
        return solve(head);
    }
};
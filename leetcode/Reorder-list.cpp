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
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        ListNode *tmp = head;
        while(tmp != NULL){
            v.push_back(tmp);
            tmp = tmp->next;
        } 
        int i=0;
        int j= v.size()-1;
        head->next = v[j];
        i++;
        tmp = head->next;
        while(j>i){
            tmp->next = v[i];
            tmp = tmp->next;
            j--;
            tmp->next = v[j];
            tmp = tmp->next;
            i++;
        }
        tmp->next = NULL;
    }
};
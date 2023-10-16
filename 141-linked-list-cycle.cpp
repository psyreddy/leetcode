/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return 0;
        ListNode* s = head;
        ListNode* f = head;
        while(f->next!=NULL && f->next->next!=NULL){
            s = s->next;
            f = f->next;
            f = f->next;
            if(s==f){
                return 1;
            }
        }
        return 0;
    }
};
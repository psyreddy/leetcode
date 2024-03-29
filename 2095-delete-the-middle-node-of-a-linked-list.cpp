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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* s = head;
        ListNode* f = head;
        ListNode* del = NULL;
        while(f!=NULL && f->next!=NULL){
            del = s;
            s=s->next;
            f=f->next->next;
        }
        del->next = s->next;
        return head;
    }
};
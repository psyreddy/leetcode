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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode *f=head;
        ListNode *s=head;
        ListNode *temp=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s = s->next;
            f = f->next->next;
            if(s==f) break;
        }
        if(s!=f){
            return NULL;
        }
        if(s==f && s==head) {
            if(s->next->next==NULL) return NULL;
            return s;
        }
        while(temp!=s){
            s=s->next;
            temp=temp->next;
        }
        return temp;

    }
};

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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode *f=head;
        ListNode *s=head;
        ListNode *temp=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s = s->next;
            f = f->next->next;
            if(s==f) {
                while(temp!=s){
                    s=s->next;
                    temp=temp->next;
                }
                return s;
            }
        }
        return NULL;
    }
};
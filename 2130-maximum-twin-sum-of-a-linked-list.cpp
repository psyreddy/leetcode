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
private:
    ListNode* rev(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nxt;
        while(curr!=NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
public:
    int pairSum(ListNode* head) {
        ListNode* s=head,*f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s = s->next;
            f = f->next->next;
        }
        s->next = rev(s->next);
        s = s->next;
        ListNode* begin = head;
        int ans = INT_MIN;
        while(s!=NULL){
            ans = max(ans,begin->val+s->val);
            s=s->next;
            begin=begin->next;
        }
        return ans;
    }
};
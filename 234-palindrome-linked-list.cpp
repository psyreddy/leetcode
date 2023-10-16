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
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nxt;
        // while(curr->next!=NULL){
        //     nxt = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = nxt;
        // }
        while(curr!=NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        // brute force
        /*  
        if(head->next==NULL) return true;
        queue<int> q;
        stack<ListNode*> s;
        ListNode* temp = head;
        while(temp->next!=NULL){
            s.push(temp);
            temp=temp->next;
            q.push(temp->val);
        }
        while(!s.empty()){
            if(q.front()==s.top()->val){
                q.pop();
                s.pop();
            }
            else{
                return false;
            }
        }
        return true;
        */

        // Optimal 
        ListNode* s = head;
        ListNode* f = head;
        ListNode* begin = head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        s->next = rev(s->next);
        s = s->next;
        while(s!=NULL){
            if(begin->val!=s->val) return 0;
            begin = begin->next;
            s = s->next;
        }
        return 1;
    }
};
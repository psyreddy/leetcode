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
    int len(ListNode* head){
        if(head == NULL) return 0;
        int ans = 1;
        ListNode* temp = head;
        while(temp->next!=NULL){
            ans++;
            temp = temp->next;
        }
        return ans;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = len(head);
        int idx = l-n;
         ListNode* temp1 = head;
        if(idx==0){
            return head->next;
        }
        while(idx>0){
            temp1 = temp1->next;
            idx--;
        }
        ListNode* temp2 = head;
        idx = l-n;
        while(idx>1){
            temp2 = temp2->next;
            idx--;
        }
        temp2->next = temp1->next;
        delete temp1;
        return head;
    }
};
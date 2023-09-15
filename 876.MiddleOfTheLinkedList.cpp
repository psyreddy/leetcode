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
    int len(ListNode *head){
        ListNode* temp = head;
        int count = 0; 
        while(temp!=NULL){
            count ++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int l = len(head);
        ListNode* temp = head;
        l = l/2;
        while(l>0){
            temp = temp->next;
            l--;
        }
        return temp;
    }
};
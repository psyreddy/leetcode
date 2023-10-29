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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA,*temp2 = headB;
        ListNode* ans = NULL;
        while(true){
            if(temp1==NULL){
                if(temp2!=NULL)
                temp1 = headB;
                else
                return NULL;
            }
            if(temp2==NULL){
                if(temp1!=NULL)
                temp2 = headA;
                else
                return NULL;
            }
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
};
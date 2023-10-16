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
    bool isPalindrome(ListNode* head) {
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

    }
};


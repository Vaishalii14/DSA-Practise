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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        
        ListNode *slow=head;
        int length=0;
        while(slow!=NULL){
            length++;
            slow=slow->next;
        }
        k=k%length;
        if(k==0){
         return head;   
        }
        slow=head;
        ListNode *fast=head;
        while(k>0 and fast!=NULL){
            fast=fast->next;
            k--;
        }
        
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* newHead=slow->next;
        fast->next=head;
        slow->next=NULL;
        return newHead;
    }
};
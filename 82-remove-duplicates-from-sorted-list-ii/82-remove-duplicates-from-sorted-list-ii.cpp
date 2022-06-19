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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        int temp=INT_MIN;;
        ListNode *p1=head;
        ListNode *p2=head->next;
        ListNode *prev=NULL;
        while(p1!=NULL and p2!=NULL){
            while(p2!=NULL and p1->val==p2->val){
                temp=p1->val;
                p1->next=p2->next;
                p2->next=NULL;
                delete p2;
                p2=p1->next;
            }
           
            if(p1->val==temp){
                if(prev!=NULL){
                    prev->next=p2;
                }
                else{
                    head=p2;
                }
                p1->next=NULL;
                delete p1;
                p1=p2;
                if(p2!=NULL){
                    p2=p2->next;
                }
                temp=INT_MIN;
            }
            else{
                prev=p1;
                p1=p1->next;
                p2=p2->next;
            }
            
        }
        return head;    
    }
};
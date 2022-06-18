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
        ListNode *p1=head;
        if(p1==NULL){
            return NULL;
        }
        ListNode*p2=head->next;
        while(p1!=NULL and p2!=NULL){
            while(p2!=NULL and p1->val==p2->val){
                p1->next=p2->next;
               p2->next=NULL;
                delete p2;
                p2=p1->next;
            }
            if(p2!=NULL){
                p1=p2;
                p2=p2->next;
            }
           
        }
        
        return head;
    }
};
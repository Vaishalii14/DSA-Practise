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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode *temp=head;
         ListNode *node1=head;
         ListNode *node2=head->next;
        ListNode*prev=NULL;
        while(temp!=NULL and temp->next!=NULL){
            if(temp==head){
                node1->next=node2->next;
                node2->next=node1;
                head=node2;
                temp=node2;
                    
            }
            else{
                prev=node1;
                node1=temp;
                node2=node1->next;
                prev->next=node2;
                node1->next=node2->next;
                node2->next=node1;
                temp=node2;
            }
            temp=temp->next->next;
        }
      return head;  
    }
};
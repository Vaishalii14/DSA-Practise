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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode;
        ListNode*p1=NULL;
        int carry=0;
        while(l1!=NULL and l2!=NULL){
            /*
            if(l1->val+l2->val+carry<=9){
                if(p1==NULL){
                    head->val=l1->val+l2->val+carry;
                    p1=head;
                }
                else{
                    ListNode* newNode=new ListNode;
                    newNode->val=l1->val+l2->val+carry;
                    p1->next=newNode;
                    p1=newNode;   
                }
            }
            */
                if(p1==NULL){
                    head->val=(l1->val+l2->val+carry)%10;
                    carry=(l1->val+l2->val+carry)/10;
                    p1=head;
                }
                else{
                    ListNode* newNode=new ListNode;
                    newNode->val=(l1->val+l2->val+carry)%10;
                    carry=(l1->val+l2->val+carry)/10;
                    p1->next=newNode;
                    p1=newNode;   
                }
            l1=l1->next;
            l2=l2->next;
                
            }
           while(l1!=NULL){
              if(p1==NULL){
                    head->val=(l1->val+carry)%10;
                    carry=(l1->val+carry)/10;
                    p1=head;
                }
               else{
                    ListNode* newNode=new ListNode;
                    newNode->val=(l1->val+carry)%10;
                    carry=(l1->val+carry)/10;
                    p1->next=newNode;
                    p1=newNode;   
                }
               l1=l1->next;
           }
            while(l2!=NULL){
               if(p1==NULL){
                    head->val=(l2->val+carry)%10;
                    carry=(l2->val+carry)/10;
                    p1=head;
                }
               else{
                    ListNode* newNode=new ListNode;
                    newNode->val=(l2->val+carry)%10;
                    carry=(l2->val+carry)/10;
                    p1->next=newNode;
                    p1=newNode;   
                }
                l2=l2->next;
            }
            while(carry!=0){
                ListNode* newNode=new ListNode;
                newNode->val=(carry)%10;
                carry=(carry)/10;
                p1->next=newNode;
                    p1=newNode; 
            }
        return head;
        
    }
};
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL and list2==NULL){
            return NULL;
        }
       ListNode* head=new ListNode;
       ListNode* p1=NULL;
        while(list1!=NULL and list2!=NULL){
            if(list1->val<list2->val){
                if(p1==NULL){
                    head->val=list1->val;
                    list1=list1->next;
                    p1=head;
               }
                else{
                   ListNode* newNode=new ListNode;
                   newNode->val=list1->val;
                   list1=list1->next; 
                   p1->next=newNode; 
                    p1=newNode;
                }
            }
            else{
                if(p1==NULL){
                    head->val=list2->val;
                    list2=list2->next;
                    p1=head;
               }
                else{
                    ListNode* newNode=new ListNode;
                    newNode->val=list2->val;
                    list2=list2->next; 
                   p1->next=newNode;
                    p1=newNode;
                }
            }
        }
        while(list1!=NULL){
            if(p1==NULL){
                head->val=list1->val;
                list1=list1->next;
                p1=head;
            }
            else{
                ListNode* newNode=new ListNode;
                newNode->val=list1->val;
                list1=list1->next;
                p1->next=newNode;
                p1=newNode;
            }
        }
        while(list2!=NULL){
            if(p1==NULL){
                head->val=list2->val;
                list2=list2->next;
                p1=head;
            }
            else{
                ListNode* newNode=new ListNode;
                newNode->val=list2->val;
                list2=list2->next;
                p1->next=newNode;
                p1=newNode;
            }
        }
      return head;  
    }
};
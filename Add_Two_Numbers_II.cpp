/*You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 */

#include <iostream>
#include <vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     
 };
 class Solution {
ListNode* reverse(ListNode* head){
           ListNode* prev=NULL;
           ListNode* curr=head;
          ListNode* next=NULL;
           while(curr!=NULL){
               next=curr->next;
              curr->next=prev;
               prev=curr;
               curr=next;

           }
           return prev;
 }
void  Insertattail(ListNode* &head,ListNode* &tail,int val){
    ListNode* temp= new ListNode(val);
    if(head==NULL){
            head=temp;
            tail=temp;
            return;
    }
    else{
       tail->next=temp;
        tail=temp;

    }

}

 ListNode* add(ListNode* l1, ListNode* l2) {
ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        int carry=0;

        while(l1!=NULL||l2!=NULL||carry!=0){
            int data1=0;
            if(l1!=NULL)
           data1=l1->val;
            int data2=0;
            if(l2!=NULL)
            data2=l2->val;

            int sum= carry+data1+data2;
            int digit=sum%10;
     
     Insertattail(anshead,anstail,digit);

    carry=sum/10;
    if(l1!=NULL)
  l1=l1->next;
  if(l2!=NULL)
  l2=l2->next;

 }
 return anshead;
 }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
             // step-1 reverse LL
         l1=reverse(l1);
         l2=reverse(l2);

        //  step-2 add 2 LL
ListNode* ans= add(l1,l2);

        // step-3 reverse again

     ans =reverse(ans);

     return ans;
            
    }
};




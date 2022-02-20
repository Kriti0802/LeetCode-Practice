//Given the head of a singly linked list, reverse the list, and return the reversed list.

#include <iostream>
using namespace std;

  struct ListNode {
      int val;
     ListNode *next;
 };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         if(head==NULL||head->next==NULL){
            return head;
         }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        
        while(curr!=NULL){
                 forward=curr->next; //store 
                  curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
        
        
    }
};
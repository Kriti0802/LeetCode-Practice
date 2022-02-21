/*Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.*/
#include <iostream>
using namespace std;
  struct ListNode {
    int val;
      ListNode *next;
 };

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
          int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL && cnt<k){
           temp=temp->next;
            cnt++;
        }
         if(cnt!=k){
            return head;
        }
        
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
      int count=0;
         //rrevrse first k nodes
        while(curr!=NULL&&count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
           count++;
        }
       //recursion call
        if(next!=NULL){
        head->next=reverseKGroup(next,k);
        }
        return prev;
        
    }
};

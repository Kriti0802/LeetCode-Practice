/*Given the head of a sorted linked list, delete all duplicates such that each element appears only once.
 Return the linked list sorted as well.*/

 #include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
              
        return head;}
        ListNode* curr=head;
        while(curr->next!=NULL ){
         if(curr->next->val==curr->val){
             
             curr->next=curr->next->next;
         }
            else{
                curr=curr->next;
            }
        }
        
            return head;
    }
};


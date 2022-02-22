/*Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to.
 Note that pos is not passed as a parameter.*/

//Floyd's cycle:

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode* slow=head;  //it will take 1 step
        ListNode* fast=head; //it will take 2 steps
        
        while(slow!=NULL && fast !=NULL &&fast->next!=NULL){
           fast=fast->next;
            if(fast!=NULL){
             fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast){
            return true;
            }
        }
        
        return false;
    }
};

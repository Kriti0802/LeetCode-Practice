/*Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.

It is guaranteed that the node to be deleted is not a tail node in the list.

 */

#include <iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     
 };
 class Solution {
public:
    void deleteNode(ListNode* node) {
       if(node->next==NULL){
           delete node;
       }
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};
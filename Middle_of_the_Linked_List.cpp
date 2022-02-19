/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     
 };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
          // ListNode *last=head;
        while(temp!=NULL && temp->next!=NULL){
           temp=temp->next->next;
            head=head->next;
        }
        return head;
        
    }
};
   
     
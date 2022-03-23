/*Given the head of a linked list, return the list after sorting it in ascending order.

 */
#include <iostream>
#include <vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     
 };

 class Solution {
public:
    ListNode* sortList(ListNode* head) {
      vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
         v.push_back(temp->val);
            temp=temp->next;
        }
    // sort(v.begin(),v.end());
        temp=head;
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
        
    }
};
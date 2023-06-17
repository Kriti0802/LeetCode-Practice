#include <bits/stdc++.h>
#include <vector>
using namespace std;

  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val=node->next->val;   //copy the value 1->2->3->4  node=3  1->2->4->null
        node->next=node->next->next;
        

    }
};
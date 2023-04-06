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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy; //address store of  dummy
      
   
        int carry=0;
        while(l1!=NULL||l2!=NULL ||carry!=0)
        {
                 int sum=0;
            if(l1!=NULL)
            {
            sum+=l1->val;
            l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
           if(carry!=0)
           {
               sum+=carry;
           }
            int num=sum%10;  //ans part
            carry=sum/10;  //carry we will get here;
              ListNode* n=new ListNode();
            n->val=num;
            dummy->next=n;
            dummy=dummy->next;
            
       
        }
        return temp->next;
        
    }
};
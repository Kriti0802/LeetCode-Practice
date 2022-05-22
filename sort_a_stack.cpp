#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/


void SortedStack :: sort()
{
   //Your code here,
   priority_queue<int>pq;  //in ascending order
   while(s.empty()!=true)
   {
       pq.push(s.top());
       s.pop();
   }
   stack<int>x;
   
   
   while(pq.empty()!=true)
   {
       x.push(pq.top());
       pq.pop();
   }
   
   while(x.empty()!=true)
   {
          s.push(x.top());
       x.pop();
       
   }
   
   
}
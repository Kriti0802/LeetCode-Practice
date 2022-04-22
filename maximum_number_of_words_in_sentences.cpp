#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    string str="i love you kriti";
    int i;
    int count=0;
    for(i=0;i<str.length();i++)
    {
       if(str[i]==' '){
           count++;
       }

    }
    cout<<count;*/

     vector<string>sentencs{"anubhav is good","kriti is more more cutie"};
     string str;
     int i,j;
     int count=0;
     int max=-1;
     for(i=0;i<sentencs.size();i++) //15<2
     {
         str=sentencs[i];     
         for(j=0;j<str.length();j++)
         {
               if(str[j]==' ')
               { 
               count++;
               }
               
         }  
        
         if(count>max)
         {
             max=count;
         }
         
           count=0;
         
         
     }
     cout<<max<<endl;
        cout<<max+1<<endl;

    
}
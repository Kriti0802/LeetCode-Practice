/*Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.

You need to help them find out their common interest with the least list index sum. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.*/


#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
         vector<string>ans;
        unordered_map<string,int>mp1,mp2;
        int minn=INT_MAX;
        for(int i=0;i<list1.size();i++)
        {
            mp1[list1[i]]=i;
        
        }
         for(int i=0;i<list2.size();i++)
        {
            mp2[list2[i]]=i;
         
        }
                
    int k=0;
              for(auto it1:mp1)
         {
             for(auto it2:mp2)
             {
             
                 if(it1.first==it2.first)
                 {
                     k=it1.second+it2.second;
               
                     if(minn>k)
                     {
                            
                          ans.clear();
                         minn=k;
                         ans.push_back(it2.first);
                        
                     }
                     else if(k==minn){
                    
                         ans.push_back(it2.first);
                     }
                 }
             }
         }
        
        return ans;
    }
};

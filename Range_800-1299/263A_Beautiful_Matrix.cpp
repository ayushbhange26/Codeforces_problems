
#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<vector<int>> ans(5);
   int first,last;
   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           int x ;
           cin >> x;
           if(x==1){
               first = i;
               last = j;
           }
           ans[i].push_back(x);
       }
   }

   
   int step = (abs)(2-first)+(abs)(2-last);
    cout << step;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   stack<long>first,second;
   long q,type,x;
   cin >> q;
   while(q--)
   {
     cin >> type;
     if(type==1)
     {
       cin >> x;
       first.push(x);
     }
     else{
        if(second.empty())
        {
          while(!first.empty()){
              second.push(first.top());
              first.pop();
          }
        }
        if(!second.empty())
        {
          if(type==2)second.pop();
          if(type==3)cout << second.top() << endl;
        }
     }
   }
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,k,n;
  string st = "";
  stack<string>stk;
  cin >> t;
  while(t--)
  {
    cin >> n;
    if(n==1)
    {
      string str;
      cin >> str;
      stk.push(st);
      st+=str;
    }
    else if(n==2)
    {
      cin >> k;
      stk.push(st);
      st.erase(st.size()-k);
    }
    else if(n==3)
    {
      cin >> k;
      cout << st[k-1] << endl;
    }
    else{
       st = stk.top();
       stk.pop();
    }
  }
  return 0;
}

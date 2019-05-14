#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  ll n,p,i,area,tp;
  cin >> n;
  vector<ll>hist;
  stack<ll>stk;
  for( i = 0;i<n;i++)
  {
    cin >> p;
    hist.push_back(p);
  }
  i = 0;
  ll max_area = -1;
  while(i<n)
  {
    if(stk.empty() || hist[stk.top()]<=hist[i])
    {
       stk.push(i++);
    }
    else{
       tp = stk.top();
       stk.pop();

       area = hist[tp]*(stk.empty()? i: i-stk.top()-1);
       max_area = max(area,max_area);
    }
  }

  while(stk.empty()==false)
  {
    tp = stk.top();
    stk.pop();
    area = hist[tp]*(stk.empty()? i: i-stk.top()-1);
    max_area = max(area,max_area);
  }
  cout << max_area << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long
int main()
{
  ll t,n,m,x,i,p,cnt,sum,cnt1,k,j;
  cin >> t;
  while(t--)
  {
    cin >> n >> m >> x;
    vector<ll>a(n);
    vector<ll>b(m);
    for(i = 0;i<n;i++)
    {
      cin >> a[i];
    }
    for(i = 0;i<m;i++)
    {
      cin >> b[i];
    }
    sum = 0;cnt = 0;k = 0;j = 0;
    while(k<n && sum+a[k]<=x)
    {
      sum+=a[k];
      k++;
    }
    cnt = k;
    while(j<m && k>=0)
    {
      sum+=b[j];
      j++;
      while(sum>x && k>=0)
      {
        k--;
        sum-=a[k];
      }
      if(sum<=x && k+j>cnt)
      {
         cnt = k+j;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}

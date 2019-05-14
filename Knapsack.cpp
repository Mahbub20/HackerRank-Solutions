#include<bits/stdc++.h>
using namespace std;
int knapsack(int ar[],int m,int n)
{
  int i;
  int cal[n+1];
  memset(cal,0,sizeof(cal));
  for(i = 0;i<m;i++)
  {
    for(int j = ar[i];j<=n;j++)
    {
      cal[j] = max(cal[j],cal[j-ar[i]]+ar[i]);
    }
  }
  return cal[n];
}
int main()
{
  int t,n,m,ar[2010];
  cin >> t;
  while(t--)
  {
    cin >> m >> n;
    for(int i = 0;i<m;i++)
    {
      cin >> ar[i];
    }
    cout << knapsack(ar,m,n) << endl;
  }
  return 0;
}

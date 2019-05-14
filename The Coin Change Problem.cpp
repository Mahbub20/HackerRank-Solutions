#include<bits/stdc++.h>
using namespace std;
long coinchange(long ar[],long n,long m)
{
  long table[n+1],i,j;
  memset(table,0,sizeof(table));
  table[0] = 1;

  for(i = 0;i<m;i++)
  {
    for(j = ar[i];j<=n;j++)
    {
      table[j]+=table[j-ar[i]];
    }
  }
  return table[n];
}
int main()
{
  long n,m,i;
  cin >> n >> m;
  long ar[m];
  for(i = 0;i<m;i++)
  {
    cin >> ar[i];
  }
  cout << coinchange(ar,n,m) << endl;
  return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long
int main()
{
  ll n,i;
  cin >> n;
  ll ar[n],can[n];
  for(i = 0;i<n;i++)
  {
    can[i] = 1;
  }
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  for(i = 1;i<n;i++)
  {
    if(ar[i]>ar[i-1])can[i] = can[i-1]+1;
  }
  ll sum = 0;
  for(i = n-2;i>=0;i--)
  {
    if(ar[i]>ar[i+1]){
    can[i] = max(can[i],can[i+1]+1);
    }
    sum+=can[i];
  }
  cout << sum+can[n-1] << endl;
  return 0;
}

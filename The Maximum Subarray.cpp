#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin >> t;
  while(t--)
  {
    cin >> n;
    int ar[n],maxx1,sum,sum1;
    for(int i = 0;i<n;i++)
    {
      cin >> ar[i];
    }
    if(n==1)cout << ar[n-1] << " " << ar[n-1] << endl;
    else{
     maxx1 = -1;
     sum1 = 0;
      for(int i = 0;i<n-1;i++)
      {
        sum = 0;
        if(ar[i]>0)sum1+=ar[i];
        for(int j = i;j<n;j++)
        {
          sum+=ar[j];
          //cout << "sum: " << sum << endl;
        }
        maxx1 = max(maxx1,sum);
        //cout << "max: " << maxx1 << endl;
      }
      if(ar[n-1]>0)sum1+=ar[n-1];
      else{
         sum1 = sum1;
       }
      cout << maxx1 << " " << sum1 << endl;
    }
  }
  return 0;
}

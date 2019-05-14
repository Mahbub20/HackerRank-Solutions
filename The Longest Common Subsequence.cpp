#include<bits/stdc++.h>
using namespace std;
void longest_common_subsequence(int vc1[],int vc2[],int n,int m)
{
  int lcs[n+1][m+1],r,c,l,k,i;

  for(r = 0;r<=n;r++)
  {
    for(c = 0;c<=m;c++)
    {
      if(r==0 || c==0)lcs[r][c] = 0;
      else if(vc1[r-1]==vc2[c-1])lcs[r][c] = lcs[r-1][c-1]+1;
      else{
         lcs[r][c] = max(lcs[r-1][c],lcs[r][c-1]);
      }
    }
  }

  l = n;
  k = m;
  i = lcs[l][k];
  int tmp = i;
  int Lcs[i];

  while(l>0 && k>0)
  {
    if(vc1[l-1]==vc2[k-1]){
      Lcs[i-1] = vc1[l-1];
      i--;
      l--;
      k--;
    }
    else if(lcs[l-1][k]>lcs[l][k-1])l--;
    else k--;
  }
  for(i = 0;i<tmp;i++)
  {
    cout << Lcs[i] << " ";
  }
}
int main()
{
  int n,m,i;
  cin >> n >> m;
  int vc1[n];
  int vc2[m];
  for(i = 0;i<n;i++)
  {
    cin >> vc1[i];
  }
  for(i = 0;i<m;i++)
  {
    cin >> vc2[i];
  }
 longest_common_subsequence(vc1,vc2,n,m);
 cout << endl;
 return 0;
}

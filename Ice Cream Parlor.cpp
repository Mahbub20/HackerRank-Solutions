#include<bits/stdc++.h>
using namespace std;
/*int bin_search(vector<int>ar,int l,int r,int x)
{
  int mid;
  if(r>=l){
     mid = l+(r-1)/2;

     if(ar[mid]==x)return mid;

     else if(x<ar[mid])
     {
       return bin_search(ar,l,mid-1,x);
     }
     else{
       return bin_search(ar,mid+1,r,x);
     }
  }

  return -1;

}*/
int main()
{
  int m,n,t,i,j,p,tmp,tmp1,ind,ind1,ans;
  cin >> t;
  while(t--)
  {
    cin >> m >> n;
    vector<int>ar;
    for(i = 0;i<n;i++)
    {
      cin >> p;
      ar.push_back(p);
    }
    for(i = 0;i<n;i++)
    {
      for(j = i+1;j<n;j++)
      {
        if(ar[i]+ar[j]==m){
          ind = i+1;
          ind1 = j+1;
          break;
        }
      }
    }
    cout << ind << " " << ind1 << endl;
  }
  return 0;
}

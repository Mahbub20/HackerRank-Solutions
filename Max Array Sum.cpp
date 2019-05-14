#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int>vec,int n)
{
  int curr;
  if(n==1)
  return vec[0];
  //tracking sum till index i-2
  int prev_prev = vec[0];
  //tracking sum till index i-1
  int prev = max(vec[0],vec[1]);
  for(int i = 2;i<n;i++)
  {
    curr = max(vec[i],max(prev,prev_prev+vec[i]));
    prev_prev = prev;
    prev = curr;
  }
  return prev;
}
int main()
{
  ios::sync_with_stdio(false);
  int n,p;
  vector<int>vec;
  cin >> n;
  for(int i = 0;i<n;i++)
  {
    cin >> p;
    vec.push_back(p);
  }
  int res = maxSum(vec,n);
  cout << res << endl;
  return 0;
}

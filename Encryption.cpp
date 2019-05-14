#include<bits/stdc++.h>
using namespace std;
int main()
{
  string txt,msg = "";
  double row,col;
  int rem,chk;
  getline(cin,txt);
  for(int i = 0;i<txt.size();i++)
  {
    if(txt[i]==' ')continue;
    msg+=txt[i];
  }
   double len = msg.size();
   double  r = sqrt(len);
   row = floor(r);
   col = ceil(r);
   chk = row*col;
   if(chk<len)
   {
     rem = col-row;
     row+=rem;
   }
   char encoded_ar[100][100];
   int k = 0;
     for(int i = 0;i<row;i++)
   {
     for(int j = 0;j<col;j++)
     {
       if(k<=len){
       encoded_ar[i][j] = msg[k++];
       }
       else
       encoded_ar[i][j] = 'A';
     }
   }
   /*for(int i = 0;i<row;i++)
   {
     for(int j = 0;j<col;j++)
     {
       cout << encoded_ar[i][j];
     }
     cout << endl;
   }*/
    for(int j = 0;j<col;j++)
    {
      for(int i = 0;i<row;i++)
      {
        if(((int)encoded_ar[i][j])>=97 && ((int)encoded_ar[i][j])<=122)
        cout << encoded_ar[i][j];

      }
      cout << " ";
    }
    cout << endl;
    return 0;
}

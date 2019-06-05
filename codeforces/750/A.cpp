//Tilda Swinton
#include<bits/stdc++.h>
using namespace std;
main()
{
  int n,k,t=240;
  cin>>n>>k;
  int x=t-k,c=0,bal=0,kk=-1;
  if(k==240)
  {
  cout<<"0";
  return 0;
  }
  for(int i=1;i<=n;i++)
  {
      bal=bal+i*5;
      if(bal<=x)
        c++;
      else
        break;
  }
  cout<<c;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
   ll x,m=0;
   cin>>x;
   ll a[2*x+1];
   for(ll i=0;i<x;i++)
   {
       ll bal;cin>>bal;
       a[i]=bal;
       a[x+i]=bal;
   }
   ll c=0;
   for(int i=0;i<2*x;i++)
   {
       if(a[i]==1){
        c++;
       }
       else{
        m=max(m,c);
        c=0;
       }
   }
   m=max(c,m);
    cout<<m;
}

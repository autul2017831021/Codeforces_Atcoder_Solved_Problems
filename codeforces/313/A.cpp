#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int ll,a,b,r;
   cin>>ll;
   if(ll>0)
    cout<<ll<<endl;
   else
   {
       a=(ll/10);
       r=ll%10;
       b=ll/100;
       b=b*10+r;
       cout<<max(a,b)<<endl;
   }

}

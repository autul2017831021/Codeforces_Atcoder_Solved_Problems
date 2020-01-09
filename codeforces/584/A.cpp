#include<bits/stdc++.h>
using namespace std;
main()
{
   long long n,k,b=0,e=0,c,d,p,j=1,np;
   cin>>n>>k;
   if(n==1 && k==10)
   {
       cout<<"-1";
       return 0;
   }
   else if(k==10)
   {
       cout<<k;
     for(int i=1;i<n-1;i++)
       cout<<b;
     return 0;
   }
   else if(k<10)
    {
     cout<<k;
     for(int i=0;i<n-1;i++)
       cout<<b;
     return 0;
    }
}
///do 770A 313B 1097B
///460,492,570 A

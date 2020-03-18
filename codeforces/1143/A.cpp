#include<bits/stdc++.h>
using namespace std;
main()
{
   int n,a[200005],x,y;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=n-1;i>=0;i--)
   {
       if(a[i]==0)
       {
           x=i+1;
           break;
       }
   }
   for(int i=n-1;i>=0;i--)
   {
       if(a[i]==1)
       {
           y=i+1;
           break;
       }
   }
   cout<<min(x,y)<<endl;

}

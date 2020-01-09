#include<bits/stdc++.h>
using namespace std;
main()
{
   int n,c=0,k;
   cin>>n>>k;
   pair<int,int>p[10000];
   for(int i=1;i<=n;i++)
   {
       int a;
       cin>>a;
       p[i].first=a;
       p[i].second=i;
   }
   sort(p,p+n+1);
   /*
   for(int i=1;i<=n;i++)
   {
       cout<<p[i].first<<" ";
   }
   cout<<endl;
   for(int i=1;i<=n;i++)
   {
       cout<<p[i].second<<" ";
   }
   cout<<endl;
   */
   for(int i=1;i<=n;i++)
   {
       if(p[i].first<=k)
       {
          c++;
          k=k-p[i].first;
       }
       else
        break;

   }
   if(c>0)
   {
       cout<<c<<endl;
       for(int i=1;i<=c;i++)
        {
           cout<<p[i].second<<" ";
        }
   }
   else
    cout<<c<<endl;
   return 0;
}


#include<bits/stdc++.h>
using namespace std;
main()
{
   int n,c=0,r=0,s=0,bal=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       bal=i*(i+1);
       r=bal/2;
       if(r<=n)
       {
           c++;
           n=n-r;
       }
       else
        break;
   }
   cout<<c<<endl;
   return 0;
}


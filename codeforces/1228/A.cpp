#include<bits/stdc++.h>
using namespace std;
main()
{
   int l,r,x;
   bool track;
   cin>>l>>r;
   for(int i=l;i<=r;i++)
   {
       int k;
       k=i;
       int a[10]={0};
       track=true;
       while(k)
       {
           x=k%10;
           k=k/10;
           a[x]++;
           //printf("x:%d k:%d a[x]:%d\n",x,k,a[x]);
           if(a[x]>1)
           {
               track=false;
               break;
           }
       }
       if(track)
        {
           cout<<i;return 0;
        }
   }
   cout<<"-1";
   return 0;
}

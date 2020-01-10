#include<bits/stdc++.h>
using namespace std;
long long maxS(long long a[],long long size)
{
   long long max_so_far = 0, max_ending_here = 0;
   for (int i = 0; i < size-1; i++)
   {
       max_ending_here = max_ending_here + a[i];
       if (max_ending_here < 0)
           max_ending_here = 0;
       else if (max_so_far < max_ending_here)
           max_so_far = max_ending_here;
   }
   return max_so_far;
}
long long maxT(long long a[],long long size)
{
   long long max_so_far = 0, max_ending_here = 0;
   for (int i = 1; i < size; i++)
   {
       max_ending_here = max_ending_here + a[i];
       if (max_ending_here < 0)
           max_ending_here = 0;
       else if (max_so_far < max_ending_here)
           max_so_far = max_ending_here;
   }
   return max_so_far;
}
main()
{
   long long n;
   cin>>n;
   while(n--)
   {
       long long v[100000];
       long long k,x,sumy=0,sa=0,bal=0,sal=0;
       cin>>k;
       for(int i=0;i<k;i++)
       {
           cin>>x;
           sumy=sumy+x;
           v[i]=x;
       }
       bal=maxS(v,k);
       sal=maxT(v,k);
       sa=max(bal,sal);
       if(sumy>sa)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }

}
///do 770A 313B 1097B

#include<bits/stdc++.h>
using namespace std;
main()
{
   int n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int bal=(k*l)/nl;
   int sal=c*d;
   int tal=p/np;
   int r=min(bal,min(sal,tal));
   cout<<r/n<<endl;
   return 0;
}
///do 770A 313B 1097B
///460,492,570 A


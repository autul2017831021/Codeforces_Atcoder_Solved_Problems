#include<bits/stdc++.h>
using namespace std;
main()
{
    long long c=0;
    long long  n,m;
    cin>>n>>m;
    long long x=m/n;

    if(m%n!=0)
    {
        c=-1;
        cout<<c;
        return 0;
    }
    if(n==m)
    {
      c=0;
      cout<<c;
        return 0;
    }
while(1)
{
     if(x%3==0)
        {
            x=x/3;
            ///cout<<x<<',';
            c++;
        }
     else if(x%2==0)
        {
            x=x/2;
            ///cout<<x<<',';
            c++;
        }
     if(x==1)
     {
         break;
     }
     else if(x%2!=0 && x%3!=0)
     {
         c=-1;
         break;
     }

}
    cout<<c;

}

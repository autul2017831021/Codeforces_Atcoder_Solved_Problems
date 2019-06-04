#include<bits/stdc++.h>
#include<math.h>
using namespace std;
main()
{
    long long n,m,a,b,c=0,x=0;
    cin>>n>>m>>a>>b;
    double d=b/m;
    if(n<m)
    {
        cout<<min((n*a),(b))<<endl;
    }
    else if(d>a || d==a)
    {
        cout<<n*a<<endl;
    }
    else if(d<a && m==n)
    {
        cout<<b<<endl;
    }
    else if(d<a && n>m)
    {
        if(n%m==0)
        {
            x=n/m;
            cout<<x*b<<endl;
        }
        else
        {
            x=n/m;
            long long result=min(x*b+a*(n-x*m),(x+1)*b);
            cout<<result<<endl;
        }
    }
}

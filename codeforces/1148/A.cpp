#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long r=0;
    if(a==b && b==c && a==c)
    {
        cout<<4*a<<endl;
    }
    else if(a==b)
    {
        a=a+c;
        cout<<2*a<<endl;
    }
    else if (a==c && a>b)
    {
       r=(2*c)+(2*b)+1;
       cout<<r<<endl;
    }
    else if (a==c && a<b)
    {
       r=(2*c)+(2*a)+1;
       cout<<r<<endl;
    }
    else if (b==c && a>b)
    {
       r=(2*c)+(2*b)+1;
       cout<<r<<endl;
    }
    else if (b==c && a<b)
    {
       r=(2*c)+(2*a)+1;
       cout<<r<<endl;
    }
    else
    {
       long long x=min(a,b);
       r=(2*c)+(2*x)+1;
       cout<<r<<endl;
    }

}

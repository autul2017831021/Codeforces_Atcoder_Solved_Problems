#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,k;
    cin>>n>>k;
    long long r,g,b;
    r=n*2;
    g=n*5;
    b=n*8;
    if(r%k==0)
        r=r/k;
    else
        r=(r/k)+1;
    if(g%k==0)
        g=g/k;
    else
        g=(g/k)+1;
    if(b%k==0)
        b=b/k;
    else
        b=(b/k)+1;
    cout<<r+g+b<<endl;
}


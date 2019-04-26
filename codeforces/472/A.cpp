#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,a,b;
    cin>>n;
    if(n%2!=0)
    {
        b=9;
        a=n-b;
    }
    else
    {
        a=n/2;
        b=n/2;
        if(a%2!=0)
        {
            a=a+1;
            b=b-1;
        }

    }
    cout<<a<<" "<<b<<endl;
}

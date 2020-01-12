#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n,t=1;
    cin>>n;
    if((n-2)%3==0)
    {
        printf("1 2 %lld",n-3);
    }
    else
    {
        printf("1 1 %lld",n-2);
    }
}

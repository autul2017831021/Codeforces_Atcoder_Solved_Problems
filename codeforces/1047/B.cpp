#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n,m=0;cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        m=max(m,a+b);
    }
    cout<<m<<endl;
}

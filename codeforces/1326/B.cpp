#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n;
    cin>>n;
    vector<ll>b;
    vector<ll>x;
    for(ll i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        b.push_back(k);
    }
    ll c=0;
    x.push_back(0);
    for(ll i=1;i<n;i++)
    {
        ll bal=c+b[i-1];
        if(bal>c)
            x.push_back(bal);
        else
            x.push_back(c);
        c=x[i];
    }
    for(ll i=0;i<n;i++)
    {
        cout<<x[i]+b[i]<<" ";
    }
}

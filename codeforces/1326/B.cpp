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
    ll c=b[0];
    x.push_back(b[0]);
    for(ll i=1;i<n;i++)
    {
        x.push_back(b[i]+c);
        if(b[i]+c>c)
            c=b[i]+c;
    }
    for(ll i=0;i<n;i++)
        cout<<x[i]<<" ";

}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,q;
    cin>>n;
    ll a[n+10];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    ll p[q+10];
    for(int i=1;i<=q;i++)
    {
        ll x;cin>>x;
        p[i]=x;
    }
    for(ll i=1;i<=q;i++)
    {
        cout<<upper_bound(a,a+n,p[i])-a<<endl;
    }
}


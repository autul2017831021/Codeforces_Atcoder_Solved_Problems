#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,q;
    cin>>n;
    ll a[n+10];
    for(ll i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cin>>q;
    ll p[q+10];
    for(int i=1;i<=q;i++)
    {
        ll x;cin>>x;
        ll l,r;
        l=1;
        r=n;
        while(r>=l)
        {
            ll mid=(l+r)/2;
            if(a[mid]>x)
                r=mid-1;
            else
                l=mid+1;
        }
        cout<<l-1<<endl;
    }

}


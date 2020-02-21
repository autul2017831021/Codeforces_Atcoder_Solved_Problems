#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
        ll h=n/2;
        ll s=0,e=0;
        for(int i=0;i<h;i++)
            s+=v[i];
        for(int i=h;i<n;i++)
            e+=v[i];
        cout<<e*e+s*s<<endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,m,total=0,t=0;
    cin>>n;
    vector<ll>v,w;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        total+=x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    cin>>m;
    for(int i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        w.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        ll bal=w[i];
        cout<<total-v[bal-1]<<endl;
    }
}

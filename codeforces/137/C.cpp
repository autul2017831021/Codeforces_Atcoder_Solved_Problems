using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
bool bal(pair<ll,ll>a,pair<ll,ll>b){
    return b.S > a.S;
}
main()
{
    ll n,c=0,s=0,l=0,r=0;
    cin>>n;
    vector<pair<ll,ll> >v;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.rbg,v.ren,bal);
    l=v[0].F;
    r=v[0].S;
    for(int i=1;i<n;i++)
    {
        if(l<v[i].F && r>v[i].S)
            c++;
        if(l>v[i].F)
        {
            l=v[i].F;
            r=v[i].S;
        }
    }
    cout<<c<<endl;
}

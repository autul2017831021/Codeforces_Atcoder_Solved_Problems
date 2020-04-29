#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef map<ll,ll> ml;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0;
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")

main()
{
    ll n,s=0;
    cin>>n;
    vp v;
    ml m;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        m[x]=i;
    }
    ml::iterator it;
    for(it=m.bg;it!=m.en;it++){
        v.pb({its,itf});
    }
    sort(v.bg,v.en);
    cout<<v.sz;nl;
    for(int i=0;i<v.sz;i++)
        cout<<v[i].S<<" ";
    nl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef vector<ll> vc;
typedef map<ll,ll> ml;
typedef ostringstream OS ;
typedef stringstream SS ;
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
#define yes printf("YES ");
#define no printf("NO ");
#define minusone printf("-1 ");
#define ne cin>>
#define hoynai cout<<"hoynai"<<endl;
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
string ntos(ll n) {
     OS str1 ;
     str1 << n ;
     return str1.str();
}
ll ston(string s) {
     ll x ;
     SS str1(s);
     str1 >> x ;
     return x ;
}
vc v;
ll first(ll a,ll b,ll c)
{
    ll bal=a;
    b=b-a;
    c=c-a;
    b=b/3;
    c=c/3;
    return bal+b+c;
}
ll second(ll a,ll b,ll c)
{
    ll x=c/3;
    ll r=c%3;
    ll bal=min(a,min(b,r));
    a=a-bal;
    b=b-bal;
    a=a/3;
    b=b/3;
    return a+b+x+bal;
}
ll third(ll a,ll b,ll c)
{
    ll xx,x,rr,r;
    xx=c/3;
    rr=c%3;
    x=b/3;
    r=b%3;
    ll bal=min(rr,min(r,a));
    a=a-bal;
    a=a/3;
    return xx+x+bal+a;
}
ll fourth(ll a,ll b,ll c)
{
    ll cc=0;
    return cc;
}
main()
{
    ll a,b,c,r,x,y,z;
    vc w;
    for(int i=0;i<3;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    sort(v.bg,v.en);
    a=v[0];b=v[1];c=v[2];
    r=first(a,b,c);
    x=second(a,b,c);
    y=third(a,b,c);
    z=fourth(a,b,c);
    w.pb(r);w.pb(x);w.pb(y);w.pb(z);
    cout<<*max_element(w.bg,w.en);
}

/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
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
#define inf 100000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
ll bigmod(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%mod;
        y=y>>1;
        x= (x*x)%mod;
    }
    return res;
}
ll Pow(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x);
        y=y>>1;
        x= (x*x);
    }
    return res;
}
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
main()
{
    ll n;ne n;ll g=0,k=0;ll ans=0;
    string s;ne s;
    vc w;
    vector<pair<ll,pair<ll,ll> > >v;
    ll bal=0;ll shuru=inf,shesh=ninf;
    for(ll i=0;i<s.sz;i++){
        if(s[i]=='G'){
            shuru=min(i,shuru);
            shesh=max(shesh,i);
            bal++;
            g++;
            if(i==n-1){
                v.pb({bal,{shuru,shesh}});
            }
        }
        else{
             k++;
             if(bal!=0){
                v.pb({bal,{shuru,shesh}});
             }
             shuru=inf;
             shesh=ninf;
             bal=0;
        }
    }
    if(v.sz==0){de ans;r0}
    for(int i=0;i<v.sz-1;i++){
        ///de v[i].F;nl;
        ///de v[i].S.F;sp;de v[i].S.S;nl;
        if(v[i+1].S.F-v[i].S.S==2){
            ll kal=v[i].F+v[i+1].F,bu=0;
            if(kal<g){
                bu++;
            }
            w.pb(kal+bu);
        }
        else{
            ll kal=v[i].F,bu=0;
            if(kal<g){
                bu++;
            }
            w.pb(kal+bu);
        }
    }
    ll kal=v[v.sz-1].F;
    ll bu=0;
    if(kal<g){
        bu++;
    }
    w.pb(kal+bu);
    de *max_element(w.bg,w.en);

}

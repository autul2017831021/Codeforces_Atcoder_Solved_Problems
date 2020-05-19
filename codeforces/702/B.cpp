/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
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
#define inf 1000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES \n");
#define no printf("NO \n");
#define mone printf("-1 ");
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
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
main()
{
    ll n;ne n;
    ll ans=0;
    ll p[32];
    for(int i=0;i<32;i++)
    {
        ll x=pow(2,i);
        p[i]=x;
    }
    ml m;ml ::iterator it;vp v;
    for(int i=0;i<n;i++)
    {
        ll c;ne c;
        m[c]++;
    }
    for(it=m.bg;it!=m.en;it++)
    {
        v.pb({itf,its});
    }
    sort(v.bg,v.en);
    for(ll i=0;i<v.sz;i++)
    {
        ll x=v[i].F;ll y=v[i].S;
        for(int j=0;j<32;j++)
        {
            if(p[j]>x)
            {
                ll b=p[j]-x;
                if(b>x && m[b]>0){
                    ans=ans+(y*m[b]);
                }
            }
            else if(p[j]==x)
            {
                ans=ans+((y-1)*y)/2;
            }
        }
    }
    de ans;
}

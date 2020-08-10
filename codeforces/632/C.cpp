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
#define inf 10000000000000000000
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
    int t;ne t;
    vector<pair<string,int> >v[30];
    while(t--)
    {
        string s;
        ne s;
        ll l=s.sz;
        for(int i=0;i<60-l;i++){
            s.pb(s[i%l]);
        }
        v[s[0]-'a'].pb({s,l});
    }
    for(int i=0;i<26;i++)
    {
        if(v[i].sz==0)continue;
        sort(v[i].bg,v[i].en);
        int koto=0;
        vector<int>a[60000];
        vector<string>bal;
        string s=v[i][0].F;
        bal.pb(s);
        a[koto].pb(v[i][0].S);
        for(int j=1;j<v[i].sz;j++){
            if(v[i][j].F==s){
                a[koto].pb(v[i][j].S);
                continue;
            }
            koto++;
            s=v[i][j].F;
            bal.pb(s);
            a[koto].pb(v[i][j].S);
        }
        for(int j=0;j<bal.sz;j++)
        {
            s=bal[j];
            sort(a[j].rbg,a[j].ren);
            for(int k=0;k<a[j].sz;k++){
                string ss=s.substr(0,a[j][k]);
                de ss;
            }
        }
    }
}

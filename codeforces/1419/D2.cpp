#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define inf 10000000000
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
//#define modd 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.F<b.F || (a.F==b.F && a.S>b.S))return true;
    return false;
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
ll bigmod(ll x, ll y,ll mod)
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
int main()
{
    int tt=1;
    while(tt--)
    {
        ll n;ne n;
        int in=1;
        ml m;ml ::iterator it;
        vc v;
        ll a[n+1];
        memset(a,-1,sizeof(a));
        for(int i=0;i<n;i++){
            ll x;ne x;
            v.pb(x);
            m[x]++;
        }
        sort(v.rbg,v.ren);
        for(it=m.bg;it!=m.en;it++){
            for(int i=0;i<its;i++){
                a[in]=itf;
                if(in+2>=n){
                    in=0;
                }
                else{
                    in+=2;
                }
            }
        }
        if(n==1){
            de "0";nl;de v[0];nl;continue;
        }

        ll ans=0;
        for(int i=1;i<n-1;i++){
            if(a[i+1]>a[i] && a[i]<a[i-1])ans++;
        }
        de ans;nl;
        for(int i=0;i<n;i++){
            de a[i];sp;
        }
        nl;
    }
}

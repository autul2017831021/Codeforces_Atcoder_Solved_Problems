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
#define modd 998244353
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
ll onami(ll n)
{
    return (n*(n+1))/2;
}
int main()
{
    int t;cin>>t;
    ll a[35];
    for(ll i=1;i<=30;i++){
        ll p=Pow(2,i);a[i]=p;
    }
    for(int ii=0;ii<t;ii++){
        ll n;ne n;
        ml m;ml ::iterator it;
        for(int i=0;i<n;i++){
            ll c;ne c;
            m[c]++;
        }
        ll ans=0;
        vc v;v.pb(0);
        for(it=m.bg;it!=m.en;it++){
            v.pb(itf);
        }
        ll p[n+10];p[0]=0;
        for(int i=1;i<v.sz;i++){
            p[i]=p[i-1]+m[v[i]];
        }
        for(int i=1;i<v.sz;i++){
            if(i==v.sz-1){
                ll bb=onami(m[v[i]]-1);
                ans=ans+bb;
                break;
            }
            ll bal=onami(m[v[i]]-1);
            ans=ans+bal;
            ll t=0;
            for(int j=1;j<=30;j++){
                if(a[j]>v[i]){t=a[j]-1;break;}
            }
            if(t<=v[i])continue;

            int in=i;
            ll l=i,r=v.sz-1;
            ll mid;
            while(r>=l)
            {
                mid=(l+r)/2;
                if(v[mid]>t){
                    r=mid-1;
                }
                else if(v[mid]==t){
                    in=mid;break;
                }
                else{
                    in=mid;
                    l=mid+1;
                }
            }
            if(in>i){
                bal=p[in]-p[i];
                ans=ans+(bal*m[v[i]]);
            }
        }
        de ans;nl;
    }
}

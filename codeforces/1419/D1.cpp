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
        ml m;
        vc v;
        ll a[n+1];
        memset(a,-1,sizeof(a));
        for(int i=0;i<n;i++){
            ll x;ne x;
            v.pb(x);
            m[x]++;
        }
        sort(v.rbg,v.ren);
        if(n==1){
            de "0";nl;de v[0];nl;continue;
        }
        if(n%2)
        {
            ll l=0,r=n-1;
            bool f=1;int s=0;
            for(int i=0;i<n/2;i++){
                if(f){
                    a[l]=v[i];
                    a[l+1]=v[n-i-1];
                    l=l+2;
                    f=0;
                    m[v[i]]--;m[v[n-i-1]]--;
                }
                else{
                    a[r]=v[i];
                    a[r-1]=v[n-i-1];
                    r=r-2;
                    f=1;
                    m[v[i]]--;m[v[n-i-1]]--;
                }
            }
            int in=0;
            for(int i=0;i<n;i++){
                if(a[i]==-1){
                    in=i;break;
                }
            }
            ml ::iterator it;
            if(in>0){
                for(it=m.bg;it!=m.en;it++){
                    if(its>0){
                        a[in]=itf;break;
                    }
                }
            }
            ll ans=0;
            for(int i=1;i<n-1;i++){
                if(a[i+1]>a[i] && a[i]<a[i-1])ans++;
            }
            de ans;nl;
            for(int i=0;i<n;i++){
                de a[i];sp;
            }
        }
        else{
            ll l=0,r=n-1;
            bool f=1;int s=0;
            for(int i=0;i<n/2;i++){
                if(f){
                    a[l]=v[i];
                    a[l+1]=v[n-i-1];
                    l=l+2;
                    f=0;
                }
                else{
                    a[r]=v[i];
                    a[r-1]=v[n-i-1];
                    r=r-2;
                    f=1;
                }
            }
            ll ans=0;
            for(int i=1;i<n-1;i++){
                if(a[i+1]>a[i] && a[i]<a[i-1])ans++;
            }
            de ans;nl;
            for(int i=0;i<n;i++){
                de a[i];sp;
            }
        }
        nl;
    }
}

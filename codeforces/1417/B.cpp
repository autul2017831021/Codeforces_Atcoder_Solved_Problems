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
int main()
{
    int t;cin>>t;
    while(t--)
    	{
            ll n,k,y=-1;
            ne n;ne k;
            ll x;
            int ar[n+4];
            vc v;
            if(k%2!=1){
                y = k/2;
            }
            ml mm;
            for(int i=0;i<n;i++){
                ne x;
                if(y==x){
                    v.pb(i);
                    continue;
                }
                if(mm[k-x]==1){
                    ar[i]=1;
                }
                else{
                    ar[i]=0;
                    mm[x]=1;
                }
            }
            for(int i=0;i<v.size();){
                ar[v[i]]=0;
                i++;
                if(i<v.size())
                    ar[v[i]]=1;
                i++;
            }
            for(int i=0;i<n;i++){
                de ar[i];sp;
            }
            nl;
    	}
    }

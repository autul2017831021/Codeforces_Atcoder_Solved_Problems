#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<pair<ll,ll> > vp;
typedef vector<ll> vc;
typedef map<char,ll> ml;
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
#define inf 1000000000000
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
#define modd 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<pair<ll,ll>,ll>a,pair<pair<ll,ll>,ll>b)
{
    if(a.F.S>b.F.S || (a.F.S==b.F.S && a.F.F<b.F.F))return true;
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
//ll n,k,m;
//vc a,b,c;
//bool onami()
//{
//
//}
vc a,b;
bool f[200010]={0};
vc g[200003];
ll bal,sal;
void DFS(ll x,vc g[])
{
    f[x]=1;
    bal=bal+a[x];sal=sal+b[x];
    for(ll i=0;i<g[x].sz;i++){
        int xx=g[x][i];
        if(!f[xx]){
            DFS(xx,g);
        }
    }
}
int main()
{
//    cin>>n>>m;
//    for(int i=0;i<n;i++){
//        ll c;ne c;a.pb(c);
//    }
//    for(int i=0;i<n;i++){
//        ll c;ne c;b.pb(c);
//    }
//    sort(a.bg,a.en);sort(b.bg,b.en);
    ll v,e;cin>>v>>e;

    for(int i=0;i<v;i++){
        ll c;ne c;a.pb(c);
    }
    for(int i=0;i<v;i++){
        ll c;ne c;b.pb(c);
    }
    for(int i=0;i<e;i++){
        ll x,y;
        cin>>x>>y;
        x--;y--;
        g[x].pb(y);
        g[y].pb(x);
    }
    for(int i=0;i<v;i++){
        bal=0;sal=0;
        if(!f[i]){
            DFS(i,g);
            if(bal!=sal){
                cout<<"No";r0
            }
        }
    }
    cout<<"Yes";
}

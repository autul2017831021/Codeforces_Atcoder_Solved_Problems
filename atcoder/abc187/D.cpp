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
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define r0 return 0;
#define F first
#define S second
#define its (*it).S
#define itf (*it).F
#define inf 1000000000000000000
#define ninf -1000000000
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/* priority_queue<ll,vector<ll>,greater<ll> > */
bool pusu(pair<int,int>a,pair<int,int>b)
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
    return (a*b)/__gcd(a,b);
}
vp bal,bl;
ll n;
ll B()
{
    ll vote=0;
    for(int i=0;i<n;i++){
        vote+=bal[i].F;
    }
    sort(bal.rbg,bal.ren);
    ll temp=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        temp=temp+bal[i].F+bal[i].S;
        vote=vote-bal[i].F;
        ans++;
        if(temp>vote)break;
    }
    return ans;
}
void A()
{
    cin>>n;
    ll vote=0,ans=0;
    vp v;
    for(int i=0;i<n;i++){
        ll a,t;
        cin>>a>>t;
        vote+=a;
        bal.pb(make_pair(a,t));
        v.pb(make_pair(a+a+t,a));
    }
    ll ball=B();
    sort(v.rbg,v.ren);
    ll temp=0;
    for(int i=0;i<n;i++){
        temp+=(v[i].F-v[i].S);
        vote=vote-v[i].S;
        ans++;
        if(temp>vote)break;
    }
    de min(ball,ans);nl;
}
void D()
{

}
int main()
{
   A();
}

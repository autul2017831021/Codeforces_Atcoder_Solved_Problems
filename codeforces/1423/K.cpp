#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
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
const int MX=1000101;
bool prime[MX];
vector<ll>v;
void gomu_gomu(ll M)
{
    prime[0]=prime[1]=true;
    for(ll i=4;i<=M;i=i+2)
        prime[i]=true;
    for(int i=3;i<=sqrt(M);i=i+2){
        if(prime[i]==false){
            for(ll j=i*i;j<=M;j=j+2*i)
                prime[j]=true;
        }
    }v.pb(2);
    for(ll i=3;i<=M;i=i+2){
        if(prime[i]==false)
            v.push_back(i);
    }
}
ll upper(ll l,ll r,ll x)
{
    ll mid,i=0;
    while(r>=l)
    {
        mid=(l+r)/2;
        if(v[mid]>x){
            r=mid-1;i=mid;
        }
        else{
            l=mid+1;
        }
    }
    return i;
}
int main()
{
    int t;scanf("%d",&t);
    gomu_gomu(1000011);
    while(t--)
    {
        int n;scanf("%d",&n);
        ll in=upper_bound(v.bg,v.en,n)-v.bg;
        in--;
        ll i=upper(0,in,sqrt(n));
        printf("%d\n",2+in-i);
    }
}

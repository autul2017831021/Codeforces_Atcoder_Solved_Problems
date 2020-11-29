///waaatttt/// 
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
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
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
void AA()
{
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    vc v;
    v.pb(abs(1-r)+abs(1-c));
    v.pb(abs(1-r)+abs(m-c));
    v.pb(abs(n-r)+abs(1-c));
    v.pb(abs(n-r)+abs(m-c));
    ll d=*max_element(v.bg,v.en);
    cout<<d<<endl;
}
void BB()
{
    int n,k;
    vc v;
    ml m;
    ne n;ne k;
    ll count=0,ans=0;
    ll mm;
    vc a;
    for(int i=0;i<n;i++){
        ll c;ne c;v.pb(c);
        m[c]++;
        if(m[c]>count){
            count=m[c];
            mm=c;
        }
    }
    ml ::iterator it;
    for(it=m.bg;it!=m.en;it++){
        mm=itf;
        ans=0;
        for(int i=0;i<n;i++){
             //de i;sp;
            if(v[i]==mm){
            }
            else{
                i=i+k-1;
                 ans++;
             }
        }
        a.pb(ans);
    }
    ans=*min_element(a.bg,a.en);
    de ans;nl;
}
void C()
{
    
}
void D()
{
    
}
int main()
{
    int test;ne test;
    while(test--)
    {
        AA();
        //BB();
        //C();
        //D();
    }
}

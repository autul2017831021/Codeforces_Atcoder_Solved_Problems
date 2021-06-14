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
ll linear_sum(ll n)
{
    return (n*(n-1))/2;
}
ll range_sum(ll a,ll b,ll i)
{
    return i*(linear_sum(a)-linear_sum(b));
}
void A()
{
    
}
void B()
{
    
}
vc v;
ll kom(ll choto,ll l,ll r)
{
    ll ans=1000000;
    while(r>=l){
        ll mid=(l+r)/2;
        if(v[mid]>=choto){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}
ll beshi(ll choto,ll l,ll r)
{
    ll ans=-10000000;
    while(r>=l){
        ll mid=(l+r)/2;
        if(v[mid]<=choto){
            l=mid+1;
            ans=l-1;
        }
        else r=mid-1;
    }
    return ans;
}
void C()
{
    
}
void D()
{

}
void F()
{
    ll l,r;
    cin>>l>>r;
    ll x=r-l;
    string a=ntos(r);
    string b=ntos(l);
    ll ans[100]={0};
    reverse(a.bg,a.en);reverse(b.bg,b.en);
    for(int i=0;i<a.sz;i++){
        if(i>=b.sz)b+="0";
    }
    //de a;sp;de b;nl;
    for(int i=0;i<b.sz;i++){
        ll n=b[i]-'0';
        if(i==0)ans[i]+=x;
        ll vagfol=(n+x)/10;
        ans[i+1]+=vagfol;
        x=vagfol;
    }
    ll bal=0;
    for(int i=0;i<a.sz;i++){
      bal+=ans[i];
    }
    de bal;nl;
}
main()
{
//    ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        //A();
        //B();
        //C();
        //D();
        F();
    }
}
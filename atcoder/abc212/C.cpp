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
#define ninf -1000000000000000
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
ll bal(ll a,ll b,ll c,ll d,ll k){
    return (a*b)-k*(c|d);
}
ll n,m;
vc a,v;
int lower(int l,int r,int x)
{
    int mid,i=r;
    while(r>=l)
    {
        mid=(l+r)/2;
        if(v[mid]==x)return mid;
        else if(v[mid]>x){
            i=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return i;
}
int upper(int l,int r,int x)
{
    int mid,i=0;
    while(r>=l)
    {
        mid=(l+r)/2;
        if(v[mid]==x)return mid;
        else if(v[mid]>x){
            r=mid-1;
        }
        else{
            i=mid;
            l=mid+1;
        }
    }
    return i;
}
void A()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        ll c;ne c;a.pb(c);
    }
    for(int i=0;i<m;i++){
        ll c;ne c;v.pb(c);
    }

    sort(a.bg,a.en);sort(v.bg,v.en);

    ll ans=1000000010;
    for(int i=0;i<n;i++){
          int j;
          j=lower(0,m-1,a[i]);
          ans=min(ans,abs(a[i]-v[j]));
          j=upper(0,m-1,a[i]);
          ans=min(ans,abs(a[i]-v[j]));
    }
    de ans;nl;

}
void B()
{

}
void C()
{


}
void D()
{

}
int main()
{
   int t;
   t=1;
   //cin>>t;
   for(int i=0;i<t;i++)
   {
        A();
        //B();
        //C();
        //D();
   }
}

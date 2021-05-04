//
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
    return (n*(n+1))/2;
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
vc v[15];
void pre()
{
    for(int i=0;i<10;i++){
        v[i].pb(0);
    }
    ll a[113]={0};
    ll b[113]={0};
    for(int i=0;i<10;i++){
        int j=1;
        for(int jj=0;jj<10;jj++){
            a[jj]=0;b[jj]=0;
        }
        for(j=1;j<10-i;j++){
            v[i].pb(1);
        }
        ll len=0;
        a[0]=1;a[1]=1;
        b[0]=0;b[1]=0;
        for(int k=j;k<=200000;k++){
            len=0;
            for(int kk=0;kk<10;kk++){
                len=(len+a[kk])%mod;
                b[kk]=a[kk]%mod;
                a[kk]=0;
            }
            v[i].pb(len);
            for(int kk=0;kk<10;kk++){
                if(b[kk]>0){
                    if(kk==9){
                        ll bal=b[kk];
                        a[0]=(a[0]+bal)%mod;
                        a[1]=(a[1]+bal)%mod;
                        b[kk]=0;
                    }
                    else if(kk<9){
                        a[kk+1]=b[kk];
                        b[kk]=0;
                    }
                }
            }
        }
    }
}
void C()
{
    ll n,m;cin>>n>>m;
    ll ans=0;
    while(n){
        ll r=n%10;n/=10;
        ans=(ans+v[r][m])%mod;
    }
    cout<<ans<<endl;
}
main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;cin>>t;
    pre();
    while(t--){
        //A();
        //B();
        C();
        //D();
    }
}

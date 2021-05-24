#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b)
{
    return a.second > b.second;
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
void C()
{

}
ll n,a,b,h,c,ans;
void equal()
{
    ml l;ml ::iterator it;
    for(int i=0;i<a;i++){
        ne c;l[c]++;
    }
    for(int i=0;i<b;i++){
        ne c;
        if(l[c]>0)l[c]--;
    }
    for(it=l.bg;it!=l.en;it++){
        ans=ans+its;
    }
    de ans;nl;
}
void left(vc x)
{
    ll lagbe=abs(h-max(a,b));
    ml l;
    ml ::iterator it;
    vp v;
    for(int i=0;i<max(a,b);i++){
        l[x[i]]++;
    }
    for(int i=max(a,b);i<n;i++){
        if(l[x[i]]>0){
            l[x[i]]--;
        }
    }
    for (it=l.bg;it!=l.en;it++) {
        v.push_back(make_pair(itf,its));
    }
    sort(v.begin(), v.end(), cmp);
    for(int ii=0;ii<2*v.sz;ii++){
        int i=ii%v.sz;
        if(lagbe==0)break;
        if(v[i].S==1){ans+=1;v[i].S=0;lagbe--;}
        else{
            while(v[i].S>1 && lagbe>0){
                v[i].S-=2;
                ans++;lagbe--;
            }
        }
    }
    for(int i=0;i<v.sz;i++){
        ans=ans+v[i].S;
    }
    de ans;nl;
}
void D()
{
    cin>>n>>a>>b;
    h=n/2;
    ans=0;
    vc x;
    if(a==b){
        equal();
    }
    else{
        for(int i=0;i<n;i++){
            ne c;x.pb(c);
        }
        if(b>a)reverse(x.bg,x.en);
        left(x);
    }

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
        D();
    }
}

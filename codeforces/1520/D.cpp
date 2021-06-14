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
    ll n;
    string s;
    cin>>n>>s;
    int pos=0;
    bool f=1;
    for(int i=0;i<s.sz-1;i++){
        pos=i;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                if(j-pos>1){f=0;break;}
                else pos=j;
            }
        }
        if(!f)break;
    }
    if(f)yes;
    else no;
}
void B()
{
    ll n;cin>>n;
    ll ans=0;
    if(n<10){
        de n;nl;return;
    }
    ans=9;
    string s=ntos(n);
    for(int i=1;i<10;i++){
        ll num=i;
        for(int j=10;;){
            num=num*j+i;
            if(num>n)break;
            else ans++;
        }
    }
    de ans;nl;
}
void C()
{
    ll n;ne n;
    if(n==2){
        mone;return;
    }
    if(n==1){
        de 1;nl;return;
    }
    ll a[n+10][n+10]={0};
    if(n%2==0 || n%2){
        ll num=1;
        a[1][n]=n*n-1;
        a[n][1]=n*n;
        for(int i=1;i<=n;i++){
            a[i][i]=num;num++;
        }
        int row=n;
        int col;
        for(int c=2;c<n;c++){
            row--;
            col=c;
            for(int r=1;r<=row;r++){
                a[r][col]=num;num++;col++;
            }
        }
        col=n;
        for(int r=2;r<n;r++){
            col--;
            row=r;
            for(int c=1;c<=col;c++){
                a[row][c]=num;num++;row++;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                de a[i][j];sp;
            }nl;
        }

    }
}
void D()
{
    ll n;ne n;
    vc v;v.pb(0);
    ll ans=0;
    ml m;
    ml ::iterator it;
    for(int i=1;i<=n;i++){
        ll c;ne c;m[c-i]++;
    }
    for(it=m.bg;it!=m.en;it++){
        ans=ans+linear_sum(its);
    }
    de ans;nl;

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
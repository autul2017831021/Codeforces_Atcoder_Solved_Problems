#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef string lll;
typedef vector<pair<ll,ll> > vp;
typedef vector<lll> vc;
typedef map<lll,ll> ml;
typedef ostringstream OS ;
typedef stringstream SS ;
//typedef double dl;
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
void A()
{
    int n;
    cin>>n;
    ml m,p;ml ::iterator it;
    for(int i=0;i<n;i++){
        lll s;ne s;
        if(s[0]=='!'){
            p[s]++;
        }
        else m[s]++;
    }
    bool f=1;
    vc v;
    for(it=m.bg;it!=m.en;it++){
        lll s="!"+itf;
        if(p[s]>0){
            v.pb(itf);f=0;
        }
    }
    if(f){
        de "satisfiable";
    }
    else de v[0];
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
   A();
}

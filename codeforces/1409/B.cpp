#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
#define inf 1000000000000000000
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
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
ll bigmod(ll x, ll y,ll modd)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%modd;
        y=y>>1;
        x= (x*x)%modd;
    }
    return res;
}
int Pow(ll x, ll y)
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
int main()
{

   int t,d=1;ne t;
   while(t--)
   {
        ll a,b,x,y,n;

        cin>>a>>b>>x>>y>>n;
        ll aa=a,bb=b;ll nn=n;
        ll c,d;
        if(a>=b){
            c=b-y;d=a-x;
            ll bal=min(c,n);
            b=b-bal;n=n-bal;
            bal=min(n,d);
            a=a-bal;
        }
        else{
            c=a-x;d=b-y;
            ll bal=min(c,n);
            a=a-bal;n=n-bal;
            bal=min(n,d);
            b=b-bal;
        }
        ll ekka=a*b;
        n=nn;
        a=aa;b=bb;
        c=a-x;d=b-y;
        ll bal=min(c,n);nn=n-bal;
        a=a-bal;
        bal=min(d,nn);
        b=b-bal;
        ll dukka=a*b;
        a=aa;b=bb;
        bal=min(d,n);nn=n-bal;
        b=b-bal;
        bal=min(c,nn);
        a=a-bal;
        dukka=min(dukka,a*b);
        ekka=min(ekka,dukka);de ekka;nl;
   }
}

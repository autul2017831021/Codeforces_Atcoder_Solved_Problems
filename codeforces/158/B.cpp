/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
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
#define inf 1000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES \n");
#define no printf("NO \n");
#define mone printf("-1");
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
void kor()
{

}
main()
{
    ll n;ne n;
    ll s=0;
    ml m;
    for(int i=0;i<n;i++)
    {
        ll x;ne x;
        m[x]++;
    }
    s=s+m[4];
    ll xx=min(m[1],m[3]);
    m[1]-=xx;m[3]-=xx;
    s=s+xx+m[3];
    ll yy=m[2]/2;
    m[2]=m[2]%2;
    s=s+yy;
    if(m[2])
    {
        s+=1;
        m[1]-=2;
    }
    xx=0;yy=0;
    if(m[1]>=0){
        xx=m[1]/4;
        yy=m[1]%4;
        if(yy>0)
            yy=1;
    }
    s=s+xx+yy;
    de s;
}

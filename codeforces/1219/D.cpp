/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
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
#define inf 100000000000
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
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<char,int>a,pair<char,int>b)
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
ll kor(ll a[],ll x,ll n)
{
    ll l=1,r=n,mid;
    while(r>=l){
        mid=(l+r)/2;
        de mid;sp;
        if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }nl;
    return mid;
}
int main()
{
    ll n,k,a,ans=0;
    ne n;ne k;
    vc v;
    for(int i=0;i<n;i++){
        ll x;ne x;v.pb(x);
    }
    ne a;
    bool f=1;
    priority_queue<ll,vector<ll>,greater<ll> >q;
    for(int i=0;i<n;i++)
    {
        ll x;ne x;q.push(x);
        while(1)
        {
            if(v[i]<=k || !f){
                break;
            }
            if(q.sz==0 && k<v[i]){
                f=0;break;
            }
            k=k+a;
            ans=ans+q.top();
            q.pop();
        }
    }
    if(!f)ans=-1;
    de ans;
}

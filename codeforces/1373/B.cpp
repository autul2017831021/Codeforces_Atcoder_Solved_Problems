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
#define inf 1000000000
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
ll kor(ll l,ll r,ll a[],ll val){
    if(a[r]<val)
        return -1;
    ll mid,z=-1;
    while(l<=r){
        mid=(l+r)/2;
        ///de mid;sp;de a[mid];nl;
        if(a[mid]>val){
            z=mid,r=mid-1;
        }
        else
            l=mid+1;
    }
    ///de z;nl;
    return z;
}
main()
{
    int t;ne t;
    while(t--){
        string s;ne s;
        ll a=0,b=0;
        while(1)
        {
            bool f=0;
            if(s.sz<2){
                if(a%2){
                    de "DA";nl;
                    break;
                }
                else{
                    de "NET";nl;
                    break;
                }
            }
            for(int i=0;i<s.sz-1;i++){
                if(s[i]!=s[i+1]){
                    a++;
                    s.erase(i,2);;
                    f=1;
                    break;
                }
            }
            if(!f){
                if(a%2){
                    de "DA";nl;
                    break;
                }
                else{
                    de "NET";nl;
                    break;
                }
            }
        }
    }
}

/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
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
#define inf 10000000000
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
/*
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
*/
int main()
{
    ll n;ne n;
    vc v(n),a(n),ans;
    for(int i=0;i<n;i++){
        ne v[i];
    }
    ll c=0,x=0;
    for(int i=0;i<n;i++)
    {
        c=v[i];
        a=v;
        ll choto=c;
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>choto){
                a[j]=choto;
            }
            choto=a[j];
            c+=a[j];
        }choto=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>choto){
                a[j]=choto;
            }
            choto=a[j];
            c+=a[j];
        }
        if(c>x)
        {
            x=c;
            ans.clear();
            for(int ii=0;ii<n;ii++){
                ans.pb(a[ii]);
            }
        }
    }
    for(int i=0;i<n;i++){
        de ans[i];sp;
    }nl;
}


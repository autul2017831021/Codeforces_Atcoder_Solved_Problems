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
#define mone printf("-1 ");
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
    ll t,x,y,a,b;ll c=0;
    ne t;ne x;ne y;ne a;ne b;
    string s;ne s;
    ll d1,d2;
    char bal,sal;
    d1=a-x;d2=b-y;
    if(d1>0){bal='E';}
    else{bal='W';d1=-1*d1;}
    if(d2>0){sal='N';}
    else{sal='S';d2=-1*d2;}
    for(int i=0;i<t;i++)
    {
        if(s[i]==bal)
            d1--;
        if(s[i]==sal)
            d2--;
        c++;
        if(d1<=0 && d2<=0)
            break;
    }
    if(d1<=0 && d2<=0 && c<=t)
        de c;
    else de "-1";
}

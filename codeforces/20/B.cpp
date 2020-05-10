#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
typedef double dl;
typedef vector<pair<ll,ll> > vp;
typedef vector<dl> vc;
typedef map<ll,ll> ml;
typedef ostringstream OS ;
typedef stringstream SS ;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0;
#define F first
#define S second
#define inf 1000000007
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES ");
#define no printf("NO ");
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
ll Pow(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x);
        y=y>>1;
        x=(x*x);
    }
    return res;
}
void kor(dl a,dl b,dl c)
{
    dl d=(b*b)-(4*a*c);
    if(d<0){
        de "0";return;
    }
    d=sqrt(d);
    b=0-b;
    a=a+a;
    dl x,y;
    x=b-d;
    y=b+d;
    ///de d;nl;de b;nl;de a;nl;de x;nl;de y;nl;
    x=x/a;y=y/a;
    set<dl>s;set<dl>::iterator it;
    s.insert(x);s.insert(y);vc v;
    for(it=s.bg;it!=s.en;it++){
        v.pb((*it));
    }
    sort(v.bg,v.en);
    de v.sz;nl;
    for(dl i=0;i<v.sz;i++){
        printf("%.10f",v[i]);nl;
    }
}
main()
{
    dl a,b,c;
    ne a;ne b;ne c;

    if(a==0 && b==0){
        if(c==0){
            de "-1";
        }
        else
            de "0";
    }
    else if(a==0){
        dl bal=-1*c;
        bal=bal/b;
        de "1";nl;printf("%.10f",bal);
    }
    else{
        kor(a,b,c);
    }
}

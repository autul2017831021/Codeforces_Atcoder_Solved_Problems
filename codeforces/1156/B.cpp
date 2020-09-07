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
//#define mod 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
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
ll bigmod(ll x, ll y,ll mod)
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
string s,yonko;
bool nami_san(string t,int n)
{
    s.clear();yonko.clear();
    int f[30]={0},j=0;
    vector<int>v;
    set<int>st;set<int>::iterator it;
    for(int i=0;i<n;i++){
        st.insert(t[i]-'a');
        f[t[i]-'a']++;
    }
    for(it=st.bg;it!=st.en;it++,j++){
        if(j%2==0)s.pb(*it+'a');
        else v.pb(*it);
    }
    reverse(v.bg,v.en);
    for(int i=0;i<v.sz;i++){
        char c=v[i]+'a';
        if(c+1!=s[0] && c-1!=s[0]){s=c+s;}
        else if(c+1!=s[s.sz-1] && c-1!=s[s.sz-1]){s=s+c;}
        else return false;
    }
    for(int i=0;i<s.sz;i++){
        j=s[i]-'a';
        for(int ii=0;ii<f[j];ii++){yonko.pb(s[i]);}
    }
    return true;
}
int main()
{
    int tt;ne tt;
    while(tt--)
    {
        string t;
        ne t;
        if(nami_san(t,t.sz)){de yonko;}
        else de "No answer";
        nl;
    }
}


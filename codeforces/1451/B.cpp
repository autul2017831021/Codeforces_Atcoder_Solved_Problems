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
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
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
    ll n;ne n;
    if(n<4){
        de n-1;nl;
    }
    else{
        if(n%2)de "3";
        else de "2";
        nl;
    }
}
void B()
{
    int n,q;string s;
    cin>>n>>q>>s;
    int o=0,z=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')z++;
        else o++;
    }
   while(q--)
    {
        int l,r,f=0;;
        cin>>l>>r;
        char cha = s[l-1];
        char c=cha;
        for(int i=0; i<l-1; i++)
        {
            if(s[i]==c)
            {
                f = 1;
                break;
            }
        }
            if(f==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                c = s[r-1];
                for(int i=r; i<n; i++)
                {
                    if(s[i]==c)
                    {
                        f = 1;
                        break;
                    }
                }
                if(f==1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
}
void C()
{
    int n,k;
    string s,t;
    cin>>n>>k>>s>>t;
    queue<ll>q[30];
    for(int i=0;i<n;i++){
        if(s[i]!=t[i])
            q[s[i]-'a'].push(i);
    }
    for(int i=0;i<n;i++){
        if(s[i]==t[i])continue;
        
    }
}
int main()
{
    int t;ne t;
    while(t--)
    {
        //A();
        B();
        //C();
    }
}

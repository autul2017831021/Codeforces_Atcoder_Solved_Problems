#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
ll linear_sum(ll n)
{
    return (n*(n+1))/2;
}
ll range_sum(ll a,ll b,ll i)
{
    return i*(linear_sum(a)-linear_sum(b));
}
void A()
{

}
ll change,zero=0;
string a="ALICE";string b="BOB";string d="DRAW";
void isPalindrome(string word)
{
   int l=word.size();
   for(int i=0;i<(l+1)/2;i++)
   {
     if(word[i]!=word[l-1-i]){
        change++;
     }
   }
}
void B1(string s)
{
    ll o=0,z=0;
    for(int i=0;i<s.sz;i++){
        if(s[i]=='1')o++;
        else z++;
    }
    if(z==1){
        de b;nl;return;
    }
    if(z%2==0){
        de b;
    }
    else de a;
    nl;return;
 
}
void B()
{
    ll n;
    bool f=1;
    string s;
    cin>>n>>s;
    isPalindrome(s);
    if(change==0){
        B1(s);return;
    }
    for(int i=0;i<s.sz;i++){
        if(s[i]=='0')zero++;
    }
    if(change==1 && zero==2)de d;
    else de a;
    nl;

}
void C()
{

}
void D()
{

}
main()
{
//    ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        //A();
        change=0;zero=0;
        B();
        //C();
        //D();
    }
}
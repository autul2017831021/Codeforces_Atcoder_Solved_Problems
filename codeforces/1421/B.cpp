#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
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
#define inf 1000000000000
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
#define modd 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<pair<ll,ll>,ll>a,pair<pair<ll,ll>,ll>b)
{
    if(a.F.S>b.F.S || (a.F.S==b.F.S && a.F.F<b.F.F))return true;
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
void onami()
{

}
int main()
{
    int T;scanf("%d",&T);
    while(T--)
    {
        ll n;ne n;
        int a[n+100][n+100];
        memset(a,0,sizeof a);
        for(int i=0;i<n;i++){
            string s;ne s;
            for(int j=0;j<n;j++){
                if(s[j]=='S' || s[j]=='F'){
                    a[i][j]=2;
                }
                else{
                    a[i][j]=s[j]-'0';
                }
            }
        }
        vp v;
        if(a[0][1]==a[1][0]){
            ll c=a[0][1];
            if(a[n-1][n-2]==a[n-2][n-1]){
                if(a[n-1][n-2]==c){
                    v.pb({n,n-1});v.pb({n-1,n});
                }
            }
            else{
                if(a[n-1][n-2]==c){
                    v.pb({n,n-1});
                }
                else if(a[n-2][n-1]==c){
                    v.pb({n-1,n});
                }
            }
        }
        else{
            if(a[0][1]==a[n-1][n-2] && a[0][1]==a[n-2][n-1]){
                v.pb({1,2});
            }
            else if(a[1][0]==a[n-1][n-2] && a[1][0]==a[n-2][n-1]){
                v.pb({2,1});
            }
            else{
               ll c=a[0][1];
               v.pb({2,1});
               if(a[n-1][n-2]==c){
                    v.pb({n,n-1});
                }
                else if(a[n-2][n-1]==c){
                    v.pb({n-1,n});
                }
            }
        }
        de v.sz;nl;
        for(int i=0;i<v.sz;i++){
            de v[i].F;sp;de v[i].S;nl;
        }
    }
}


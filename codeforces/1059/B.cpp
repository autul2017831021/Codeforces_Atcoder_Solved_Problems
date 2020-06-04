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
#define pi acos(-1.0)
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
    int n, m;
    ne n;ne m;
    string fi[n];
    for(int a=0; a<n; a++) cin>>fi[a];
    bool ce[n][m];
    for(int a=0; a<n; a++)
    {
        for(int b=0; b<m; b++)
        {
            int q=0;
            if(a>0 and a+1<n and b>0 and b+1<m)
            {
                for(int da=-1; da<=1; da++)
                {
                    for(int db=-1; db<=1; db++)
                    {
                        if(!(da==0 and db==0)) if(fi[a+da][b+db]=='#') q++;
                    }
                }
            }
            if(q==8) ce[a][b]=1;
            else ce[a][b]=0;
        }
    }
    bool ok=1;
    for(int a=0; a<n; a++)
    {
        for(int b=0; b<m; b++)
        {
            if(fi[a][b]=='#')
            {
                bool fo=0;
                for(int da=-1; da<=1; da++)
                {
                    for(int db=-1; db<=1; db++)
                    {
                        if(!(da==0 and db==0))
                        {
                            if(a+da>0 and a+da<n and b+db>0 and b+db<m)
                            {
                                if(ce[a+da][b+db]) fo=1;
                            }
                        }
                    }
                }
                if(fo==0) ok=0;
            }
        }
    }
    if(ok) yes
    else no
}

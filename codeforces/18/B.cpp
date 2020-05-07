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
#define inf 999999999
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
main()
{
   ll n,d,m,l,c=0;
   cin>>n>>d>>m>>l;
   vp v;
   ml mm;
   ll i=0;
   for(i=0;i<=n;i++)
   {
       ll x=i*m;
       ll y=x+l;
       //de x;sp;de y;nl;
       //while(1)
       //{
           if(i<n){
              if((c+d)<x)
              {
                 de (c+d);r0
              }
              c=0;
              ll bal=y/d;
              c=d*bal;
              //de c;nl;
           }
           else
           {
               de (c+d);r0
           }
       //}
       //i++;
   }
}

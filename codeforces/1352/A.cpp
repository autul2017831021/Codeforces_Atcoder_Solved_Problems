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
   ll test;
   ne test;
   while(test--)
   {
       string s;ne s;
       if(s.sz==1)
       {
           de "1";nl;de s;;nl;
           continue;
       }
       vc v;
       for(int i=0;i<s.sz;i++)
       {
           string t="";
           if(s[i]-'0'>0){
               t=t+s[i];
              for(int j=i+1;j<s.sz;j++){
                t+="0";
              }
           }
           if(t.sz!=0){
           ll n=ston(t);
           v.pb(n);}
       }
       de v.sz;nl;
       for(int i=0;i<v.sz;i++)
       {
           de v[i];sp;
       }
       nl;
   }
}

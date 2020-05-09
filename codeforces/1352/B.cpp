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
       ll n,k;
       cin>>n>>k;
       if(k>n){
        no;nl;
       }
       else if(k==n){
        yes;nl;
        for(int i=0;i<n;i++)
            de "1 ";
        nl;
       }
       else if(n%2==0)
       {
           if(k%2){
           ll ans=0;
            for(int i=1;i<k;i++)
            {
                ans=ans+2;
            }
            if(ans>=n){
                no;nl;
            }
            else{
                yes;nl;
                for(int i=0;i<k-1;i++){
                    de "2";sp;
                }
                de n-ans;nl;
            }
           }
           else
           {
               ll ans=0;
               for(int i=0;i<k-1;i++){
                   ans=ans+1;
               }
               if(ans>=n || (n-ans)%2==0){
                no;nl;
               }
               else{
                yes;nl;
                for(int i=0;i<k-1;i++)
                {
                    de "1";sp;
                }
                de n-ans;nl;
               }
           }
       }
       else if(n%2){
           if(k%2){
               ll ans=0;
               for(int i=1;i<k;i++){
                ans+=1;
               }
               if(ans>=n || (n-ans)%2==0){
                no;nl;
               }
               else{
                yes;nl;
                for(int i=0;i<k-1;i++){
                    de "1";sp;
                }
                de n-ans;nl;
               }
           }
           else
           {
               no;nl;
           }
       }
   }
}

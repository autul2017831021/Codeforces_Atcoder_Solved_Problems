#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
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
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
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
char a1[3]={'R','G','B'};
char b1[3]={'G','B','R'};
char c1[3]={'B','R','G'};
bool bal(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
main()
{
    ll n,c=0;
    cin>>n;
    while(n>9)
    {
        n-=9;
        c+=9;
        c+=(n%10);
        n/=10;
    }
    c+=n;
    cout<<c<<endl;
}

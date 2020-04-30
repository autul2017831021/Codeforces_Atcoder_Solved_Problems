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
    string s;
    cin>>s;
    string t="";
    ll l=s.sz;
    ll x,y;
    if(s[0]=='9')
    {
        t+="1";
        for(int i=1;i<=l;i++)
        {
            t+="0";
        }
        x=ston(t);
        y=ston(s);
        cout<<x-y<<endl;
    }
    else
    {
        ll v=s[0]-'0';
        v=v+1;
        char c=v+48;
        t.pb(c);
        for(int i=1;i<l;i++)
            t.pb('0');
        x=ston(t);
        y=ston(s);
        cout<<x-y;nl;
    }
}

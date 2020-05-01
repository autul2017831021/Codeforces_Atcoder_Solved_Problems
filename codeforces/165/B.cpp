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
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define ne cin>>
#define hoynai cout<<"hoynai"<<endl;
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
vc v,p;
bool aseni(ll n,ll h)
{
    ll s=0;
    //cout<<"mid = "<<h;nl;
    for(int i=0;i<p.sz;i++)
    {
        //cout<<"power = "<<p[i];nl;
        if((h/p[i])>0)
        {
            s=s+(h/p[i]);
        }
        else
            break;
    }
    if(s<n)
    {
        //cout<<"NAI BAL";nl;
        return false;
    }
    else{
        //cout<<"ASE BAL";nl;
        return true;
    }
}
bool bal(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
main()
{
    ll n,k,l=0,h;
    ne n;ne k;
    ll r=n;
    if(n<k)
    {
        cout<<n;
        r0
    }
    if(n==k)
    {
        cout<<n-1;
        r0;
    }
    for(ll i=1,j=0;i<=1e16;i=i*k,j++)
    {
        p.pb(i);
    }
    while(r>l){
        h=(l+r)/2;
        if(aseni(n,h))
        {
            l=l;
            r=h;
            v.pb(h);
        }
        else
        {
            l=h+1;
            r=r;
        }
    }
    //hoynai
    cout<<*min_element(v.bg,v.en);
}

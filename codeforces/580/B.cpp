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
bool bal(pair<ll,ll>a,pair<ll,ll>b)
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
    ll n,d,x,y;
    ne n;ne d;
    vp v;
    vc w;
    v.pb({0,0});
    for(int i=0;i<n;i++)
    {
        ne x;ne y;
        v.pb({x,y});
    }
    sort(v.bg,v.en);
    for(int i=1;i<v.sz;i++)
    {
        v[i].S=v[i].S+v[i-1].S;
    }
    for(int i=1;i<=n;i++)
    {
        ll l,r,h;
        l=i;
        r=n;
        h=(l+r)/2;
        //cout<<"left->"<<l<<endl<<"right->"<<r<<endl;
        while(r>=l)
        {
            h=l+(r-l)/2;
            if((v[i].F+d)>v[h].F)
            {
                l=h+1;
            }
            else
            {
                r=h-1;
            }
            /*
            if(l==r)
            {
                if(v[l].F<(v[i].F+d))
                {
                    h=l;
                    break;
                }
            }
            */
            //cout<<"left->"<<l<<" right->"<<r<<" mid->"<<h;nl;
        }
        if(i==1){
            w.pb(v[r].S);
            //cout<<"mid = "<<h<<" "<<v[h].S;nl;
        }
        else{
            w.pb(v[r].S-v[i-1].S);
            //cout<<"mid = "<<h<<" "<<v[h].S<<" "<<v[i-1].S;nl;
        }
    }
    cout<<*max_element(w.bg,w.en);nl;
}

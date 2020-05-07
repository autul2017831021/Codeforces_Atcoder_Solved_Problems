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
ll dist(ll a,ll b,ll c,ll d)
{
    ll bal=(a-c)*(a-c);
    ll sal=(b-d)*(b-d);
    bal=bal+sal;
    //bal=sqrt(bal);
    return bal;
}
main()
{
   ll x1,y1,x2,y2,x3,y3;
   cin>>x1>>y1>>x2>>y2>>x3>>y3;
   vp v;
   v.pb({x1,y1});v.pb({x2,y2});v.pb({x3,y3});
   ll a,b,c,boro,choto,midi;
   a=dist(x1,y1,x2,y2);
   b=dist(x1,y1,x3,y3);
   c=dist(x2,y2,x3,y3);
   vc w;
   w.pb(a);w.pb(b);w.pb(c);
   sort(w.bg,w.en);
   boro=w[2];
   midi=w[1];
   choto=w[0];
   //de boro;sp;de midi;sp;de choto;nl;
   if(boro==midi+choto && boro>0 && midi>0 && choto>0)
   {
      de "RIGHT";
      r0
   }
   w.clear();
   for(ll i=0;i<3;i++)
   {
       //de i;nl;
       ll x=v[i].F;
       ll y=v[i].S;
       for(int j=-1;j<2;j=j+2)
       {
            //de "x";nl;
            w.clear();
            x=x+j;
            ll xx,yy,xxx,yyy;
            xx=v[(i+1)%3].F;
            yy=v[(i+1)%3].S;
            xxx=v[(i+2)%3].F;
            yyy=v[(i+2)%3].S;
            //de x;sp;de y;nl;de xx;sp;de yy;nl;de xxx;sp;de yyy;nl;
            ll a,b,c,boro,choto,midi;
            a=dist(x,y,xx,yy);
            b=dist(x,y,xxx,yyy);
            c=dist(xx,yy,xxx,yyy);
            w.pb(a);w.pb(b);w.pb(c);sort(w.bg,w.en);
            boro=w[2];
            choto=w[0];
            midi=w[1];
            //de boro;sp;de midi;sp;de choto;nl;
            if(boro==midi+choto && boro>0 && midi>0 && choto>0)
            {
                de "ALMOST";
                r0
            }
            x=v[i].F;
       }
       x=v[i].F;
       for(int j=-1;j<2;j=j+2)
       {
            //de "y";nl;
            w.clear();
            y=y+j;
            ll xx,yy,xxx,yyy;
            xx=v[(i+1)%3].F;
            yy=v[(i+1)%3].S;
            xxx=v[(i+2)%3].F;
            yyy=v[(i+2)%3].S;
            //de x;sp;de y;nl;de xx;sp;de yy;nl;de xxx;sp;de yyy;nl;
            ll a,b,c,boro,choto,midi;
            a=dist(x,y,xx,yy);
            b=dist(x,y,xxx,yyy);
            c=dist(xx,yy,xxx,yyy);
            w.pb(a);w.pb(b);w.pb(c);sort(w.bg,w.en);
            boro=w[2];
            choto=w[0];
            midi=w[1];
            //de boro;de midi;de choto;nl;
            if(boro==midi+choto && boro>0 && midi>0 && choto>0)
            {
                de "ALMOST";
                r0
            }
            y=v[i].S;
       }
   }
   de "NEITHER";
   r0
}
// 72 68 56 72 33 -88

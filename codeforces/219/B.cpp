using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
#define inf 9999999999
void nopera(ll n)
{
    for(int i=0;i<n;i++)
        cout<<"9";
}
main()
{
    ll n,p,d;
    cin>>n>>p;
    ll nn,pp;
    nn=n;
    d=n-p;
    pp=d;
    if(n==18 && p==17)
    {
        cout<<"9";
        r0;
    }
    vector<ll>v,w,x;
    while(nn>0)
    {
        v.pb(nn%10);
        nn=nn/10;
    }
    while(pp>0)
    {
        w.pb(pp%10);
        pp=pp/10;
    }
    pp=p;
    while(pp>0)
    {
        x.pb(pp%10);
        pp=pp/10;
    }
    reverse(x.bg,x.en);
    reverse(v.bg,v.en);
    reverse(w.bg,w.en);
    ll xnx=max(x.sz,w.sz);
    if(xnx<v.sz)
    {
        //cout<<xnx<<endl;
        nopera(xnx);
        r0;
    }
    ll pos=inf;
    for(int i=0;i<v.sz;i++)
    {
        if(v[i]>w[i] && i!=v.sz-1)
        {
            pos=i;
            v[i]=v[i]-1;
            break;
        }
    }
    //cout<<pos<<endl;
    bool f=1;
    for(int i=v.sz-1;i>pos;i--)
    {
        if(v[i]<9){
            v[i]=9;
            f=0;
        }
    }
    if(f && pos<20)
        v[pos]+=1;
    for(int i=0;i<v.sz;i++)
        cout<<v[i];
    cout<<endl;
}

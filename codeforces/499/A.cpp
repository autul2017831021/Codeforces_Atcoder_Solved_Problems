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
#define inf -9999999999
main()
{
    ll n,x,an=0,t=1;
    cin>>n>>x;
    vector<pair<ll,ll> >v;
    for(int i=0;i<n;i++)
    {
        ll z,y;
        cin>>z>>y;
        v.pb({z,y});
    }
    sort(v.bg,v.en);
    for(int i=0;i<n;i++)
    {
        if(t<v[i].F)
        {
            ll bal=(v[i].F-t)/x;
            //cout<<v[i].F<<" "<<t<<endl;
            //cout<<"bal->"<<bal<<endl;
            t=t+bal*x;
            //cout<<"t->"<<t<<endl;
            an+=(v[i].S-t+1);
        }
        else if(t==v[i].F)
        {
            an+=(v[i].S-v[i].F+1);
        }
        t=v[i].S+1;
    }
    cout<<an<<endl;
}

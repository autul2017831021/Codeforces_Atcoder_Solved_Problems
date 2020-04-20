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
main()
{
    ll n,d,a,b,c=-1,s=0,t;
    cin>>n>>d;
    vector<ll>v,w;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    sort(v.bg,v.en);
    for(int i=1;i<n;i++)
    {
        ll dd=v[i]-v[0];
        if(dd%d==0)
        {
            s+=(dd/d);
        }
        else
        {
            cout<<c<<endl;
            r0;
        }
    }
    cout<<s<<endl;
}
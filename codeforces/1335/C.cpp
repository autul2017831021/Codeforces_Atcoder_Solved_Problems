using namespace std;
#include<bits/stdc++.h>
typedef long long  ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>m;
        map<ll,ll>::iterator it;
        ll d=0,st=0;
        vector<ll>v;
        set<long long>s;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            m[x]++;
            s.insert(x);
        }
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        ll l=s.sz;
        for(it=m.bg;it!=m.en;it++)
        {
            if((*it).second==1)
            {
                d++;
            }
            else if((*it).second>1)
            {
                v.pb((*it).second);
            }
        }
        if(v.sz==0)
        {
            cout<<"1"<<endl;
            continue;
        }
        sort(v.rbg,v.ren);
        ll xx,yy;
        xx=min(l-1,v[0]);
        yy=min(l,v[0]-1);
        cout<<max(xx,yy)<<endl;
    }
}


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
#define its (*it).S
#define itf (*it).F
#define nl cout<<endl;
main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll> >v;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.pb({x,i+1});
        }
        sort(v.bg,v.en);
        ll ma,mi;
        ma=v[0].S;
        mi=v[0].S;
        if(n==1)
        {
            cout<<"1";nl
            continue;
        }
        for(int i=0;i<n;i++)
        {
            ma=max(ma,v[i].S);
            mi=min(mi,v[i].S);
            ll d=ma-mi+1;
            ll num=v[i].F;
            if(d==num){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        nl
    }
}

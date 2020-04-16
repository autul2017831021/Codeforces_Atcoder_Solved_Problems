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
main()
{
    ll test;
    cin>>test;
    for(int ii=0;ii<test;ii++)
    {
        vector<ll>v,w;
        ll n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.pb(x);
        }
        ll boro,choto;
        boro=*max_element(v.bg,v.en);
        choto=*min_element(v.bg,v.en);
        ll ans=choto+k;
        if(abs(ans-boro)<=k)
            cout<<ans<<endl;
        else
            cout<<"-1"<<endl;
    }

}

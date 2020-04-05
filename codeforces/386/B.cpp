#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
main()
{
    ll n,T;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    cin>>T;
    sort(v.bg,v.en);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll c=1;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]-v[i]<=T)
                c++;
            else
                break;
        }
        ans=max(ans,c);
    }
    cout<<ans<<endl;
}

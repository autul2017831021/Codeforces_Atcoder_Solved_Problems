#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll ans=INT_MAX;
        cin>>n;
        bool f=0;
        ll a[n+1]={0};
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(a[x]!=0)
            {
                ans=min(ans,i-a[x]);
                f=1;
            }
            a[x]=i;
        }
        if(f)
        {
            cout<<ans+1<<endl;
        }
        else
            cout<<"-1"<<endl;
    }

}

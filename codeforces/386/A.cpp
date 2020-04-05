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
    ll n;
    cin>>n;
    pair<ll,ll>p[n+1];
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        p[i]={x,i+1};
    }
    sort(p,p+n);
    cout<<p[n-1].second<<" "<<p[n-2].first<<endl;
}

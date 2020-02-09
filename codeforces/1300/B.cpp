#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        ll N=2*n;
        vector<ll>v;
        for(ll i=0;i<2*n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll a=abs(v[n]-v[n-1]);
        cout<<a<<endl;
    }
}

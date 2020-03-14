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
        cin>>n;
        set<ll>s;
        ll x;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}

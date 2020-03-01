#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,c=1,m=1,b=5,l=0,r=0,mid=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll j=0;
    sort(v.rbegin(),v.rend());
    for(ll i=0;i<n;i++)
    {
       while(j<n && v[i]-v[j]<=5)
       {
           j++;
           m=max(m,j-i);
       }
    }
    cout<<m<<endl;
}

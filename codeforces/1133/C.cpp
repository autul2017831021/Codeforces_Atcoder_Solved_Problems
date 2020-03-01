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
    ll k=0,j;
    sort(v.rbegin(),v.rend());
    for(ll i=0;i<n;i++)
    {
        for(j=k;j<n;j++)
        {
            if(v[i]-v[j]<=5)
            {
                m=max(m,j-i+1);
            }
            else
            {
                break;
            }
        }
        k=j+1;
    }
    cout<<m<<endl;
}

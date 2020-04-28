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
    ll n,c=0;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;v.pb(x);
    }
    for(int i=1;i<n-1;i++)
    {
        if(v[i-1]==v[i+1] && v[i+1]==1 && v[i]==0)
        {
            c++;
            v[i+1]=0;
        }
    }
    cout<<c<<endl;
}

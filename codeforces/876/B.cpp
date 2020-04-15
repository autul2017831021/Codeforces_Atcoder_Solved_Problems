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
    ll n,k,m,in=-1,bal=0;
    cin>>n>>k>>m;
    ll v[m]={0};
    vector<ll>w;
    bool f=0;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        w.pb(x);
        v[x%m]++;
        if(v[x%m]==k && f==0)
        {
            in=x%m;
            f=1;
        }
    }
    if(f==0)
    {
        cout<<"No";
        r0;
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<n;i++)
    {
        if(w[i]%m==in)
        {
            cout<<w[i]<<" ";
            bal++;
        }
        if(bal==k)
        {
            cout<<endl;
            r0;
        }
    }
}

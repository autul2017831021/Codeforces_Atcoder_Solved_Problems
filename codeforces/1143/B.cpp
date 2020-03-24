#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,m=1,k=1,nin=0,zer=0,ans=0,mn=1;
    cin>>n;
    ll nn=n;
    vector<ll>v;
    bool nine=0,zero=0,bal=1;
    while(nn)
    {
        v.push_back(nn%10);
        nn=nn/10;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        mn=mn*v[i];
    }
    k=v[0]-1;
    for(int i=1;i<v.size();i++)
        k*=9;
    if(v[0]==1)
    {
        ll x=1;
        for(int i=1;i<v.size();i++)
            x=x*9;
        cout<<x<<endl;
        return 0;
    }
    for(int i=1;i<v.size();i++)
    {
        ll x=v[i]-1;
        for(int j=0;j<v.size();j++)
        {
            if(j<i)
            {
                m=m*v[j];
                //cout<<v[j];
            }
            else if(i==j)
            {
                m=m*x;
                //cout<<x;
            }
            else{
                m=m*9;
                //cout<<9;
            }
        }
        ans=max(ans,m);
        //cout<<endl<<"ans "<<ans<<endl;
        m=1;
    }
    //cout<<endl;
    cout<<max(mn,max(ans,k))<<endl;
    //cout<<mn<<endl<<k<<endl<<ans<<endl;
}

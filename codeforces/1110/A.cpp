#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll b,k;
    cin>>b>>k;
    ll o=0,e=0;
    vector<ll>v;
    for(int i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<k-1;i++)
    {
        ll mu=(v[i]*b);
        //cout<<mu<<endl;
        if(mu%2==1)
            o++;
        else
            e++;
    }
    if(v[k-1]%2==1)
        o++;
    if(o%2==0)
        cout<<"even";
    else
        cout<<"odd";
}
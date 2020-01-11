#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll r,g,bl,b,j,h,s;
        cin>>r>>g>>bl;
        vector<ll>v;
        v.push_back(r);
        v.push_back(g);
        v.push_back(bl);
        sort(v.begin(),v.end());
        if(v[2]<=v[0]+v[1])
            cout<<(r+g+bl)/2<<endl;
        else
            cout<<v[0]+v[1]<<endl;
        v.clear();
    }
}

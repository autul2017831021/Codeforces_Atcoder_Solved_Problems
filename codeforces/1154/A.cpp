#include<bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    vector<ll>v;
    ll a;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2]<<endl;
}

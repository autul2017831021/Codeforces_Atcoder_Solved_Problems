#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll h,m;
        cin>>h>>m;
        ll tc=1440;
        if(h==0 && m==0)
            h=24;
        ll x=h*60+m;
        ll r=tc-x;
        cout<<r<<endl;
    }
}

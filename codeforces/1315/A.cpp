#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll c,r,x,y;
        cin>>c>>r>>x>>y;
        x++;y++;
        ll a,b,d,e;
        a=(r-y)*c;
        b=(y-1)*c;
        d=r*(c-x);
        e=r*(x-1);
        cout<<max(max(a,b),max(d,e))<<endl;;

    }
}

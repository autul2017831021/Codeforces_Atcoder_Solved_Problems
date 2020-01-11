#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll c=max(a,b),d=min(a,b);
        if((c+d)%3==0 && d*2>=c)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;

    }
}

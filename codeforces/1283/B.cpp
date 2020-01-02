#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll d,r,m,h;
        if(k>n)
        {
            cout<<min(n,k/2)<<endl;
        }
        else
        {
        if(n%k==0)
        {
            cout<<(n/k)*k<<endl;
        }
        else{
           h=k/2;
           d=n/k;
           r=k*d;
           if(h<=(n%k))
           {
              r=r+h;
              cout<<r<<endl;
        }
        else
        {
            r=r+(n%k);
            cout<<r<<endl;
        }
        }
        }
    }
}

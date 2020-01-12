#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll b;cin>>b;
    while(b--)
    {
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2 && r1==r2)
        {
            cout<<l1<<" "<<r1<<endl;
        }
        else if(l1!=l2)
        {
            cout<<l1<<" "<<l2<<endl;
        }
        else
        {
            cout<<r1<<" "<<r2<<endl;
        }
    }
}

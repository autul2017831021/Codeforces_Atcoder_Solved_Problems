#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        if(x%2==0)
        {
            cout<<x/2<<" "<<x/2<<endl;
        }
        else
        {
            cout<<"1 "<<x-1<<endl;
        }
    }
}

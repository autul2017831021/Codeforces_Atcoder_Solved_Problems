#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<n-1;i++)
            {
                cout<<"7";
            }
            cout<<"8"<<endl;
        }
    }
}

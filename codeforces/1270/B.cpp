#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        ll n,x;
        cin>>n;
        ll a[n+10];
        bool f=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(abs(a[i]-a[i+1])>=2)
            {
                cout<<"YES"<<endl<<i<<" "<<i+1<<endl;
                f=1;
                break;
            }
        }
        if(!f)
            cout<<"NO"<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll t,x;
    ll a[10]={1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};
    vector<ll>v;
    for(int i=0;i<10;i++)
    {
        for(int j=1;j<=9;j++)
        {
            x=a[i]*j;
            v.push_back(x);
        }
    }
    /*for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";*/
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        x=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<=n)
                x++;
            else
                break;
        }
        cout<<x<<endl;
    }
}

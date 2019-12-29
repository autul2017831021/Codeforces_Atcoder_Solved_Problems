#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],x;
    bool v[n+3000];
    for(int i=1;i<=3000;i++)
    {
        v[i]=false;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        x=a[i];
        v[x]=true;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==false)
        {
            cout<<i;return 0;
        }
    }
    cout<<n+1;
}

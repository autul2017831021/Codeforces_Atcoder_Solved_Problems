#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a[1001],b[101];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    for(int i=1;i<=n;i++)
        cout<<b[i]<<" ";

}

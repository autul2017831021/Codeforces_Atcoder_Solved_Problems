#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m=1;
    cin>>n;
    int a[n+100][n+100];
    for(int i=1;i<=n;i++)
        a[1][i]=1;
    for(int i=1;i<=n;i++)
        a[i][1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
            m=max(m,a[i][j]);
        }
    }
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<m<<endl;
}

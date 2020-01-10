#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,color=0;
    cin>>n>>m;
    char c[1001][1001];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(c[i][j]=='C' || c[i][j]=='M' || c[i][j]=='Y')
                color++;
        }
    }
    if(color>0)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
}

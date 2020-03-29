#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int g[7][7];
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            g[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a][b]=1;
        g[b][a]=1;
    }
    int z=0,o=0,s=0;
    bool f=0;
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(i!=j)
            {
                ///cout<<g[i][j]<<" ";
            }
            s+=g[i][j];
        }
        ///cout<<endl<<"sum="<<s<<endl;
        if(s>=3 || s==1 || s==0)
        {
            f=1;
            break;
        }
        s=0;
    }
    if(f)
        cout<<"WIN"<<endl;
    else
        cout<<"FAIL"<<endl;
}

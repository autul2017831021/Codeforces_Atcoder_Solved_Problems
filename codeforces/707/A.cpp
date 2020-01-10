#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,color=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char x,y;
            cin>>x;
            if(x=='C' || x=='M' || x=='Y' || y=='C' || y=='M' || y=='Y' )
                color++;
        }
    }
    if(color>0)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
}

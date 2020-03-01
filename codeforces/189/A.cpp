#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m=0,c=0,d=0,z=0,an=0;
    vector<int>v;
    int x;
    cin>>n;
    //v.resize(7);
    int a[n+1][3];
    for(int i=0;i<3;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            d=i*v[0]+j*v[1];
            c=n-d;
            //cout<<i<<" "<<j<<"->"<<d<<" "<<c<<endl;
            if(c<0)
                break;
            else if(c%v[2]==0)
            {
                an=i+j+c/v[2];
                m=max(m,an);
                //cout<<"m="<<m<<endl;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}

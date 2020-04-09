/// Shei To mama
#include<bits/stdc++.h>
using namespace std;
main()
{
    long long m,k;cin>>m;
    if(m>3)
    {
        cout<<"10"<<endl<<"15"<<endl<<"6"<<endl;
        for(int i=2;i<=m-2;i++)
        {
            long long ans=10*i;
            cout<<ans<<endl;
        }
    }
    else if(m==3)
    {
        cout<<"10"<<endl<<"15"<<endl<<"6"<<endl;
    }
    else if(m==2)
        cout<<"-1";
}

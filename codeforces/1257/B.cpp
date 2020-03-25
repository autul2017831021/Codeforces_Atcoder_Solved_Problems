#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<"YES"<<endl;
        }
        else if(n>3)
        {
            cout<<"YES"<<endl;
        }
        else if(n==3 || n==2)
        {
            if(m<4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(n==1)
        {
            cout<<"NO"<<endl;
        }
    }
}

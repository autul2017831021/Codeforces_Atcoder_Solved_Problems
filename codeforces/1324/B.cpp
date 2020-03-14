#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[5000];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        bool f=0;
        for(int i=1;i<=n-2;i++)
        {
            for(int j=i+2;j<=n;j++)
            {
                if(a[i]==a[j])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    long long b,n,s,t;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>n>>s>>t;
        if(s==t && n==t)
        {
            cout<<"1"<<endl;

        }
       /* else if(s+t==n)
        {
            cout<<n<<endl;
        }*/
        else
        {
            long long ans=n-min(s,t);
            cout<<ans+1<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,s=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
           int a;
           cin>>a;
           s=s+a;
        }
        if(s%n==0)
        cout<<s/n<<endl;
        else
            cout<<s/n+1<<endl;

    }
}

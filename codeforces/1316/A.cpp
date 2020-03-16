#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a[1001],s=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        cout<<min(s,m)<<endl;
    }
}

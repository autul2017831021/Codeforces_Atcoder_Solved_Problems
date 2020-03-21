#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    bool a[11];
    for(int i=0;i<10;i++)
        a[i]=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;cin>>x;
        a[x]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(a[v[i]])
            cout<<v[i]<<" ";
    }
}

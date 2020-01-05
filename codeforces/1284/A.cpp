#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    cin>>n>>m;
    string x;
    vector<string>v1;
    vector<string>v2;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        v2.push_back(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        long long int y;cin>>y;int i,j;
        if(y%n==0)
            i=n-1;
        else
            i=y%n-1;
        if(y%m==0)
            j=m-1;
        else
            j=y%m-1;
        cout<<v1[i]<<v2[j]<<endl;
    }
}

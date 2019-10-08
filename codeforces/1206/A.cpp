#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,x,s=0,t=0;
    vector<int>a;vector<int>b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        s=max(x,s);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        b.push_back(x);
        t=max(x,t);
    }
    cout<<s<<" "<<t<<endl;
}

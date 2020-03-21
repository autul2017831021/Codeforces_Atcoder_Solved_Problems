#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int d=0;
    for(int i=0;i<n-1;i=i+2)
    {
        d=d+v[i+1]-v[i];
    }
    cout<<d<<endl;
}

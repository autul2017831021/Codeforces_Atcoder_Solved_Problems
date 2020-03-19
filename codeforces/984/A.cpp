#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n%2==1)
        cout<<v[n/2]<<endl;
    else
    {
        cout<<v[(n/2)-1];
    }
}

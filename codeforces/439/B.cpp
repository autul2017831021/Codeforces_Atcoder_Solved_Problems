#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,x,a;
    long long h=0;
    vector<long long>v;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        h=h+x*v[i];
        if(x>1)
            x--;

    }
    cout<<h<<endl;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<int>v;
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int a,b,c;
    a=v[0];b=v[1];c=v[2];
    int z=a+b;
    if(z==c)
        cout<<"1"<<endl;
    else if(z>c)
        cout<<"0"<<endl;
    else
    {
        cout<<(c-z+1);
    }
}

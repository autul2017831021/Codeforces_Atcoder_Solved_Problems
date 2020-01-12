#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,c=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
           c++;
           v.push_back(i+1);
        }
    }
    if(c==1)
        cout<<"1"<<endl;
    else if(c==0)
        cout<<"0"<<endl;
    else
    {
        long long r=1;
        for(int i=1;i<v.size();i++)
        {
            r*=v[i]-v[i-1];
        }
        cout<<r<<endl;
    }

}


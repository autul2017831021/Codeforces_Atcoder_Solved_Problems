#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    int s=0,x,y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x>>y;
            if(x==0 && y==0)
            {

            }
            else
                v.push_back(1);
        }
    }
    cout<<v.size();
}


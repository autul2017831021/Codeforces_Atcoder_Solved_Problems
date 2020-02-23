#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int x;
        for(int i=0;i<3;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        int r=0;
        if(v[0]-1>=0)
        {
            v[0]--;
            r++;
        }
        if(v[1]-1>=0)
        {
            v[1]--;
            r++;
        }
        if(v[2]-1>=0)
        {
            v[2]--;
            r++;
        }
        if((v[0]-1)>=0 && (v[1]-1)>=0)
        {
            v[0]--;v[1]--;
            r++;
        }
        if((v[0]-1)>=0 && (v[2]-1)>=0)
        {
            v[0]--;v[2]--;
            r++;
        }
        if((v[1]-1)>=0 && (v[2]-1)>=0)
        {
            v[1]--;v[2]--;r++;
        }
        if((v[0]-1)>=0 && (v[1]-1)>=0 && (v[2]-1)>=0)
        {
            v[0]--;v[2]--;v[1]--;r++;
        }
        cout<<r<<endl;
    }
}

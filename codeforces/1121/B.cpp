#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,x,a,c=1,m=1,k=0;
    vector<long long>v;
    map<long long,long long>mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
           a=v[i]+v[j];
           mp[a]++;
        }
    }
     map<long long,long long>:: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
         m=max(m,(*it).second);
     }
        cout<<m;
}

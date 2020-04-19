using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
main()
{
    int n,a,b,c=0;
    vector<pair< bool,pair<string,string> > >v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s,t;
        cin>>s>>t;
        v.pb({1,{s,t}});
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i].S.F==v[j].S.F && v[i].S.S==v[j].S.S )
            {
                v[j].F=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].F==1)
            c++;
    }
    cout<<c<<endl;
}

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
    int n,c=0,m=0;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb({x,i+1});
    }
    sort(v.bg,v.en);
    if(n>2)
    {
        cout<<n-1<<endl;
        for(int i=1;i<v.sz;i++)
            cout<<v[i].S<<" ";
        cout<<endl;
        r0;
    }
    if(n==2)
    {
        if(v[0].F==v[1].F)
        {
            cout<<"-1"<<endl;
            r0;
        }
        cout<<n-1<<endl<<"1"<<endl;
        r0;
    }
    cout<<"-1"<<endl;
    r0;
}

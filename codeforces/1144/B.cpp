#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef  int ll;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
main()
{
    int n,x,T=-1,o=0,e=0;
    cin>>n;
    vector<int>v,w;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            w.pb(x);
            o+=x;
        }
        else
        {
            v.pb(x);
            e+=x;
        }
    }
    int s=e+o;
    sort(v.rbg,v.ren);
    sort(w.rbg,w.ren);
    int a=v.sz;
    ll b=w.sz;
    ll mz=min(a,b);
    s-=accumulate(v.bg,v.bg+mz,0);
    s-=accumulate(w.bg,w.bg+mz,0);
    if(a>mz)
    {
        s-=v[mz];
    }
    if(b>mz)
    {
        s-=w[mz];
    }
    cout<<s<<endl;
}

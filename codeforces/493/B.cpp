#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
#define r0 return 0;
typedef long long ll;
main()
{
    ll n;
    cin>>n;
    vector<ll>v,p,m;
    ll pl=0,mi=0;
    ll last=1;
    for(int i=0;i<n;i++)
    {
       ll x;
       cin>>x;
       if(x>0)
       {
           v.pb(x);
           pl+=x;
           p.pb(x);
       }
       else
       {
           v.pb(x);
           x=-1*x;
           mi+=x;
           m.pb(x);
       }
    }
    if(v[n-1]>0)
        last=1;
    else
        last=0;
    if(pl==mi)
    {
        if(p.sz==m.sz)
        {
            for(int i=0;i<m.sz;i++)
            {
                if(m[i]>p[i])
                {
                    cout<<"second";
                    return 0;
                }
                else if(p[i]>m[i])
                {
                    cout<<"first";
                    return 0;
                }
            }
            if(v[n-1]>0)
            {
                cout<<"first";
                return 0;
            }
            else
            {
                cout<<"second";
                return 0;
            }
        }
        else
        {
            for(int i=0;i<min(m.sz,p.sz);i++)
            {
                if(m[i]>p[i])
                {
                    cout<<"second";
                    r0;
                }
                else if(p[i]>m[i])
                {
                    cout<<"first";
                    r0;
                }
            }
            if(m.sz>p.sz)
            {
                cout<<"first";
                r0;
            }
            else
            {
                cout<<"second";
                r0;
            }
        }

    }
    else if(pl>mi)
    {
        cout<<"first";
    }
    else
    {
        cout<<"second";
    }
}

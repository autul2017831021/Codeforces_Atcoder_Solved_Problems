#include<bits/stdc++.h>
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
main()
{
    ll test;
    cin>>test;
    for(int ii=0;ii<test;ii++)
    {
        ll n;
        cin>>n;
        ll x=-1,y=-1;
        bool f=1;
        pair<ll,ll>p[n+1];
        for(int i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            p[i]={a,b};
                if(a-x<b-y)
                    f=0;
                else if(a<x || b<y)
                    f=0;
                x=a;
                y=b;

        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}


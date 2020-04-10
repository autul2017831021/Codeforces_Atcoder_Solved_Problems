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
        ll a,b,x,c=0,s=0;
        cin>>a>>b;
        vector<ll>w;
        for(int i=0;i<a;i++)
        {
            cin>>x;
            if(x>=b)
            {
                s+=(x-b);
                c++;
            }
            else
                w.pb(x);
        }
        sort(w.rbg,w.ren);
        for(int i=0;i<w.sz;i++)
        {
            if((b-w[i])>s)
            {
                break;
            }
            else
            {
                s-=(b-w[i]);
                c++;
            }
        }
        cout<<c<<endl;
    }
}


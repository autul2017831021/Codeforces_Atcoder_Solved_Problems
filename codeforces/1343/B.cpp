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
#define in -9999999999
main()
{
    int test;
    cin>>test;
    for(int iii=0;iii<test;iii++)
    {
        ll n;
        cin>>n;
        ll h=n/2;
        vector<ll>v,w;
        if(h%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll o=0,e=0;
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {
            if(i%2)
            {
                w.pb(i);
                if(i<n-1)
                o=o+i;
            }
            else
            {
                e=e+i;
                v.pb(i);
            }
        }
        w[w.sz-1]=e-o;
        for(int i=0;i<v.sz;i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=0;i<w.sz;i++)
        {
            cout<<w[i]<<" ";
        }
        cout<<endl;
    }
}
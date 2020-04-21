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

bool bal(pair<ll,ll>a,pair<ll,ll>b){
    return b.S > a.S;
}
main()
{
    int test;
    cin>>test;
    for(int iii=0;iii<test;iii++)
    {
        ll n,k,sn=0,inf=in,pm=0,sp=0;
        cin>>n;
        vector<ll>v;
        v.pb(0);
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            v.pb(x);
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i]>0)
            {
                if(v[i]>pm)
                    pm=v[i];
                if ( inf != in) {
                sn=sn+inf;
                inf=in;
                }
            }
            else
            {
                if(v[i]>inf)
                    inf=v[i];
                sp=sp+pm;
                pm=0;
            }
        }
        sp=sp+pm;
        if(inf!= in)
            sn=sn+inf;
        cout<<sn+sp<<endl;
    }

}


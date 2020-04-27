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
#define inf 9999999999
main()
{
    ll n,k,l,r,sk,sa;
    cin>>n>>k>>l>>r>>sa>>sk;
    vector<ll>v,w;

    /// bakider
    ll baki=sa-sk;
    ll m=n-k;
    if(m!=0){
        ll av=baki/m;
        ll mod=baki%m;
        for(int i=0;i<m;i++)
            v.pb(av);
        for(int i=0;i<mod;i++)
            v[i]=v[i]+1;
        ll ma=*max_element(v.bg,v.en);
        /// k students
        av=sk/k;
        mod=sk%k;
        for(int i=0;i<k;i++)
            w.pb(av);
        for(int i=0;i<mod;i++)
            w[i]+=1;
        ///
        for(int i=0;i<w.sz;i++)
            cout<<w[i]<<" ";
        for(int i=0;i<v.sz;i++)
            cout<<v[i]<<" ";
    }
    else
    {
        ll av,mod;
        av=sk/k;
        mod=sk%k;
        for(int i=0;i<k;i++)
            v.pb(av);
        for(int i=0;i<mod;i++)
            v[i]+=1;
        for(int i=0;i<v.sz;i++)
            cout<<v[i]<<" ";
    }
}

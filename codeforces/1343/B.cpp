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
bool bal(pair<ll,ll>a,pair<ll,ll>b){
    return b.S > a.S;
}
main()
{
    int test;
    cin>>test;
    for(int iii=0;iii<test;iii++)
    {
        ll n;
        cin>>n;
        vector<ll>v,w;
        if((n/2)%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            ll shona=0 ;
            for (int i=2;i<=n;i=i+2)
            {
                w.pb(i);
                shona+=i ;
            }
            ll baal=0 ;
            for (int i=1;i<=n-2;i=i+2) {
                w.pb(i);
                baal+=i ;
            }
            w.pb(shona-baal);
            cout<<"YES"<<endl;
            for(int i=0;i<w.sz;i++)
               cout<<w[i]<<" " ;
            cout << endl;
        }
    }

}

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
    ll n;
    cin>>n;
    ll s=1;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(x%2)
        {
            cout<<(x+s)/2<<endl;
            s=s*-1;
        }
        else
            cout<<(x/2)<<endl;
    }

}


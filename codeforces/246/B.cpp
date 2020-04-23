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
#define inf -9999999999
main()
{
    ll n,x,an=0,t=1,s=0;
    cin>>n;
    vector< ll >v;
    for(int i=0;i<n;i++)
    {
        ll z;
        cin>>z;
        v.pb(z);
        s+=z;
    }
    if(s%n==0)
    {
        cout<<n<<endl;
        r0;
    }
    else
    {
        cout<<n-1<<endl;
        r0;
    }
}


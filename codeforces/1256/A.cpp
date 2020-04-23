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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll m,d;
        m=s%n;
        d=s/n;
        if(m<=b && a*n+b>=s)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}

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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        ll x,y,z;
        cin>>a>>b>>c>>d;
        x=(a+b);
        if(x>c)
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(b+b>c)
        {
            cout<<b<<" "<<b<<" "<<c<<endl;
        }
        else if(b+c>c)
        {
            cout<<b<<" "<<c<<" "<<c<<endl;
        }
    }
}

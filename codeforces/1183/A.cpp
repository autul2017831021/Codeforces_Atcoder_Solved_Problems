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
ll bal(ll x)
{
    ll r=0;
    while(x>0)
    {
        r=r+x%10;
        x=x/10;
    }
    return r;
}
main()
{
    ll test,x=1;;
    cin>>test;
    while(1)
    {
        if(bal(test)%4==0)
        {
            cout<<test<<endl;
            r0;
        }
        test++;
    }

}

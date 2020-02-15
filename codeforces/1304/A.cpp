#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b,t;
        cin>>x>>y>>a>>b;
        ll bal=y-x;
        ll sal=a+b;
        if(bal%sal==0)
        {
            cout<<bal/sal<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
long long bal(long long a,long long b,long long c)
{
    return abs(a-b)+abs(a-c)+abs(b-c);
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,ans=0,ax,bx,cx;
        cin>>a>>b>>c;
        ans=bal(a,b,c);
        for(long long aa=-1;aa<=1;aa++)
        {
            for(long long bb=-1;bb<=1;bb++)
            {
                for(long long cc=-1;cc<=1;cc++)
                {
                    ax=aa+a;
                    bx=bb+b;
                    cx=cc+c;
                    ans=min(ans,bal(ax,bx,cx));
                }
            }
        }
        cout<<ans<<endl;

    }
}

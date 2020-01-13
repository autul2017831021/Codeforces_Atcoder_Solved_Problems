#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    int n,d,x,y,t=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        t=t+x;
    }
    y=10*(n-1);
    t=t+y;
    if(t>d)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        d=d-t;
        cout<<2*(n-1)+d/5<<endl;
    }
}

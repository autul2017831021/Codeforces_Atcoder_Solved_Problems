#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x,y,x1,x2,y1,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        ll mx,my;
        ll minx,maxx,miny,maxy;
        minx=min(x1,x2);
        maxx=max(x1,x2);
        miny=min(y1,y2);
        maxy=max(y1,y2);
        mx=b-a;
        my=d-c;
        mx+=x;
        my+=y;
        if((y1==y2 && x1==x2 ) || (x1==x2 && (a>0 || b>0)) || (y1==y2 && (d>0 || c>0)))
        {
            cout<<"no"<<endl;
        }
        else if((mx>=minx && mx<=maxx ) && (my>=miny && my<=maxy ) )
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}

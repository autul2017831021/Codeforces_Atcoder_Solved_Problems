#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,p,f,h,c,taka=0;
        cin>>b>>p>>f>>h>>c;
        b=b/2;
        if(c>h)
        {
            int m=min(b,f);
            b-=m;
            taka=c*m;
            m=min(b,p);
            taka=taka+m*h;
            cout<<taka<<endl;
        }
        else
        {
            int m=min(b,p);
            b-=m;
            taka=h*m;
            m=min(b,f);
            taka=taka+c*m;
            cout<<taka<<endl;
        }
    }
}

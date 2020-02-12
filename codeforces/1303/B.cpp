#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,g,b,h,d=0,m=0,bal;
        cin>>n>>g>>b;
        double hh,nn,gg;
        nn=n;
        gg=g;
        hh=ceil(nn/2);
        h=hh;
        if(h>g)
        {
            double ba=ceil(hh/gg);
            bal=ba;
            m=h%g;
            d=h+(bal-1)*b;
            if(d<n)
                cout<<n<<endl;
            else
                cout<<d<<endl;
        }
        else if(h<=g || n<=g)
        {
            cout<<n<<endl;
        }

    }
}

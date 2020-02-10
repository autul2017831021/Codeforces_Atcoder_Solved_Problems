#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,d,s=0;
        cin>>n;
        s=s+n;
        long long m=n;
        while(1)
        {
            d=m/10;
            s=s+d;
            m=d+(m%10);
            if(d<1)
                break;

        }
        cout<<s<<endl;

    }
}

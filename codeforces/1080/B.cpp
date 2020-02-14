#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        bool be=false,ae=false;
        cin>>a>>b;
        if(a%2==0)
           {
               ae=true;
           }
        if(b%2==0)
        {
            be=true;
        }
        if(a==b)
        {
            if(ae)
                cout<<a<<endl;
            else
                cout<<"-"<<a<<endl;
        }
        else if(ae==true && be==true)
            cout<<(a+b)/2<<endl;
        else if(ae==false && be==false)
        {
              ll cnt=b-a+1;
              cnt=cnt/2;
              ll bal=a+cnt;
              cout<<"-"<<bal<<endl;
        }
        else if(ae==false && be==true)
        {
            ll cnt=b-a+1;
            cnt=cnt/2;
            cout<<cnt<<endl;
        }
        else if(ae==true && be== false)
        {
            ll cnt=b-a+1;
            cnt=cnt/2;
            cout<<"-"<<cnt<<endl;
        }

    }
}

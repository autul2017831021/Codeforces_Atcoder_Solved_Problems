#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,s=0;
        cin>>a>>b;
        if(b*b>a)
            cout<<"NO"<<endl;
        else
        {
            if(a%2==b%2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}


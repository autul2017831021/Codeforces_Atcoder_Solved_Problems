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
        s=sqrt(a);
        if(s>=b)
        {
           if((a+b)%2==0) cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

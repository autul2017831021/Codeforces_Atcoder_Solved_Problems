#include<bits/stdc++.h>
using namespace std;
main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(c==0 && a!=b)
    {
        cout<<"NO"<<endl;return 0;
    }
    else if(c==0 && a==b)
    {
        cout<<"YES"<<endl;return 0;
    }
    else{
    double r=((b-a)/c)+1;
    //cout<<r<<endl;
    if(ceil(r)==floor(r) && r>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}

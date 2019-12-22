#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<14 || n%14==0)
            cout<<"NO"<<endl;
        else if((n%14)>6)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}

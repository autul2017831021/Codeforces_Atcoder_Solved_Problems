#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,v1,t1,v2,t2;
    cin>>n>>v1>>v2>>t1>>t2;
    int f=n*v1+2*t1;
    int s=n*v2+2*t2;
    if(f==s)
        cout<<"Friendship";
    else if(f<s)
        cout<<"First";
    else
        cout<<"Second";
}


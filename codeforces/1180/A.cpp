#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<"1";
    else if(n==2)
        cout<<"5";
    else
    {
        int x=2*n-1,s=0;
        for(int i=1;i<x;i=i+2)
        {
            s=s+i;
        }
        cout<<2*s+x<<endl;
    }
}

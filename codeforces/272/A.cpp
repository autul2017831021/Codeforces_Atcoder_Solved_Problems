#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x,s=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s=s+x;
    }
    for(int i=1;i<6;i++)
    {
        if((i+s)%(n+1)!=1)
            c++;
    }
    cout<<c<<endl;
}

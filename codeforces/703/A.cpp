#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,c,d=0,c1=0,m1=0;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m==c)
            d++;
        else if(m>c)
            m1++;
        else
            c1++;
    }
    if(c1==m1)
        cout<<"Friendship is magic!^^";
    else if(c1>m1)
        cout<<"Chris";
    else
        cout<<"Mishka";
}

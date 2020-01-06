#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;int s=0;
    cin>>n;
    while(n--)
    {

        string st;
        cin>>st;
        if(st[0]=='T')
            s=s+4;
        else if(st[0]=='C')
            s=s+6;
        else if(st[0]=='O')
            s=s+8;
        else if(st[0]=='D')
            s=s+12;
        else if(st[0]=='I')
            s=s+20;
    }
    cout<<s;
}

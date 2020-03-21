#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    string s;
    cin>>n>>s;
    int x=0,y=0,c=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='R')
            x++;
        else
            y++;
        if(x==y && s[i]==s[i+1])
            c++;
    }
    cout<<c<<endl;
}

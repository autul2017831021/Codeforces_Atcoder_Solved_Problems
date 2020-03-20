#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int p=0,r=0;
    bool f=0;
    if(s[0]=='h')
    {
        p=3;
       cout<<"http://";
    }
    else
    {
       p=2;
       cout<<"ftp://";
    }
    cout<<s[p+1];
    for(int i=p+2;i<s.size();i++)
    {
        if(s[i]=='r' && s[i+1]=='u')
        {
            r=i+1;
            if(i+2!=s.size())
                f=1;
            break;
        }
        cout<<s[i];
    }
    if(r!=0 && f)
        cout<<".ru/";
    else if(r!=0 && !f)
        cout<<".ru";
    for(int i=r+1;i<s.size();i++)
        cout<<s[i];
}

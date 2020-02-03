#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    bool f=false;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='0' && !f)
        {
            f=true;
        }
        else
        {
            cout<<s[i];
        }
    }
    if(f)
        cout<<s[s.size()-1];
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    string s,t;
    cin>>s;
    int c=0,n=5;
    vector<string>v;
    while(n--)
    {
        cin>>t;
        if(s[0]==t[0] || s[1]==t[1])
            c++;
    }
    if(c==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

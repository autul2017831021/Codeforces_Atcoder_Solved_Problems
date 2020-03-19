#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[5],c=0;
    string s;
    for(int i=1;i<=4;i++)
        cin>>a[i];
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        c+=a[s[i]-'0'];
    }
    cout<<c<<endl;
}

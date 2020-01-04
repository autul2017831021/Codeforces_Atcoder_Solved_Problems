#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i=i+2)
    {
        if(s[i]=='a' && s[i+1]=='a')
        {
            s[i]='b';
            c++;
        }
        else if(s[i]=='b' && s[i+1]=='b')
        {
            s[i]='a';
            c++;
        }
    }
    cout<<c<<endl;
        cout<<s;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x=0;string s;cin>>n>>s;
    char a[101];
    vector<bool>f(100,0);
    for(int i=1;i<=n;i++)
    {
        char c;
        c=s[i-1];
        a[i]=c;
    }
    for(int i=1;i<11;i++)
    {
        x+=i;
        f[x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(f[i])
            cout<<a[i];
    }
}

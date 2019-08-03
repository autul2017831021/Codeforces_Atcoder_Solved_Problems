#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c=0;
    char a[111];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='x' && a[i+1]=='x' && a[i+2]=='x')
        {
            c++;
        }
    }
    cout<<c;
}

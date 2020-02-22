#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,index;
    cin>>n;
    string s;
    cin>>s;
    bool f=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            index=i;
            f=0;
            break;
        }
    }
    if(f==1)
    {
        for(int i=0;i<n-1;i++)
            cout<<s[i];
    }
    else
    {
       for(int i=0;i<n;i++)
       {
           if(index!=i)
            cout<<s[i];
       }
    }
}

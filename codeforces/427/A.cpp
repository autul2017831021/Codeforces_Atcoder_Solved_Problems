#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,cr=0,c=0,p=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]<0)
        c++;
    else
        p=p+a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<0)
        {
            if(p==0)
            {
                c++;
            }
            else
            {
                p--;
            }
        }
        else
            p=p+a[i];
    }
    cout<<c;
}

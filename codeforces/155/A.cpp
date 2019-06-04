#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x=0,c=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                x++;
            }
        }
        if(x==i)
        {
            c++;
        }
        ///cout<<x<<"#"<<i<<"#"<<c<<endl;
        x=0;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                x++;
            }
        }
        if(x==i)
        {
            c++;
        }
        /// cout<<x<<"#"<<i<<"#"<<c<<endl;
        x=0;
    }
    cout<<c<<endl;
}

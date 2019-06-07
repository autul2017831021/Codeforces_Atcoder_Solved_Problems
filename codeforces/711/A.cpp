#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[100001],b[100001],bal[100001],x[100001],y[100001];
    int n,c=0,cn=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>bal[i]>>x[i]>>y[i];
        if(a[i]=='O' && b[i]=='O' || x[i]=='O' && y[i]=='O')
            c++;
    }
    if(c==0)
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
    {
        ///cin>>a>>b>>bal>>x>>y;

        if(a[i]=='O' && b[i]=='O')
        {
            if(c>n)
              cout<<a[i]<<b[i]<<bal[i]<<x[i]<<y[i]<<endl;
            else
            {
               cout<<"++|";cout<<x[i]<<y[i]<<endl;
                c=i+100000;
            }
        }
        else if(x[i]=='O' && y[i]=='O')
        {
            if(c>n)
              cout<<a[i]<<b[i]<<bal[i]<<x[i]<<y[i]<<endl;
              else
              {
                  cout<<a[i]<<b[i]<<bal[i];cout<<"++"<<endl;
                   c=i+100000;
              }
        }
        else
            cout<<a[i]<<b[i]<<bal[i]<<x[i]<<y[i]<<endl;
    }

    }



}

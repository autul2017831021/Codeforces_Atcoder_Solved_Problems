#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,i=0,a[100000],temp=0;
    cin>>n;
    bool track=false;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    temp=a[n-1];
    a[n-1]=a[n-2];
    a[n-2]=temp;
    ///cout<<"a[n-1],a[n-3]"<<a[n-1]<<" "<<a[n-3]<<endl;
    ///cout<<a[n-2]<<endl;
    if(a[n-1]+a[n-3]>a[n-2])
        track=true;
    if(track)
    {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }

    else
        cout<<"NO"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,i=0,a[100000],c=0,x=0,m=0;
    map<long long,int>mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
    if(c%2==1)
    {
        cout<<"NO";return 0;
    }
    m=a[n-1];
    if(2*m>c)
    {
        cout<<"NO";return 0;
    }
    cout<<"YES";

}



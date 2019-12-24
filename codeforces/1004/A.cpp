#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,d,c=2,a[100000],i;
    cin>>n>>d;
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]-a[i-1]==2*d)
            c++;
        else if(a[i]-a[i-1]>2*d)
            c=c+2;
    }
    cout<<c<<endl;

}

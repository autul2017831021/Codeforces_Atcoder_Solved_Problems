#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a[100001],n,x=1,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(x<=a[i])
            x++;
    }
    cout<<x<<endl;
}

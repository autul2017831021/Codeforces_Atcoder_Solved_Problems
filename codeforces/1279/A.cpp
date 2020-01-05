#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[4];
    while(n--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]+1==a[2] || a[0]+a[1]==a[2] || a[0]+a[1]>a[2])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

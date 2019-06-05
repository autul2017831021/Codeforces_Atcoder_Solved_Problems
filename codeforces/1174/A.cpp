#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,balamar=1;
    cin>>n;
    long long a[2*n],s1[n],s2[n],c1=0,c2=0;
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+2*n);
    for(int i=0,j=n;i<n && j<2*n;i++,j++)
    {
        c1=c1+a[i];
        c2=c2+a[j];
    }
    if(c1==c2)
        cout<<"-1"<<endl;
    else
    {
        for(int i=0;i<2*n-1;i++)
        {
          cout<<a[i]<<" ";
        }
        cout<<a[2*n-1]<<endl;
    }

}

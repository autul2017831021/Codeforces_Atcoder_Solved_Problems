#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,a[100000],i,c=0,negative=0,k=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            negative++;
            c=c+(-1-a[i]);
        }
        else if(a[i]==0)
        {
            c=c+1;
            k++;
        }
        else if(a[i]>1)
        {
            c=c+(a[i]-1);
        }
    }
    if(negative%2==1 && k==0)
        c=c+2;

    cout<<c<<endl;
}

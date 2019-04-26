#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a[100000],n,i,c=1,j=0,mx=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
            {
                c++;
                mx=max(c,mx);
            }
         else
         {
             //mx=max(c,mx);
             c=1;
         }

    }

    printf("%d",mx);
}
//6
// 2 2 1 3 4 1

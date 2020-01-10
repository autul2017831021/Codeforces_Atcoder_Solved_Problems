#include<bits/stdc++.h>
using namespace std;
main()
{
    long long k,n,l,c=0;
    cin>>n>>k;
    if(k<=n)
        c++;
    for(int i=2;i<=n;i++)
    {
        if(k%i==0)
        {
            if((k/i)<=n)
                c++;
        }
    }
    cout<<c<<endl;
}
